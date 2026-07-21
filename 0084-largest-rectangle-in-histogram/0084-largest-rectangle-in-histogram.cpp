class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        long long maxArea=0;
        long long pse, nse;
        for(int i=0; i<heights.size(); i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int element=st.top();
                st.pop();
                nse=i; pse=st.empty()?-1:st.top();
                maxArea=max((nse-pse-1)*heights[element], maxArea);
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=heights.size();
            int element=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            maxArea=max(maxArea, (nse-pse-1)*heights[element]);
        }
        return maxArea;
    }
};