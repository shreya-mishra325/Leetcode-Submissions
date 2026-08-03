class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int ans=0;
        while(i<j){
            int w=j-i;
            int h=min(height[i], height[j]);
            ans=max(ans, w*h);
            if(height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return ans;
    }
};