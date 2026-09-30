class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int sz=0;
        vector<int> v;
        for(int i=0; i<seq.size(); i++){
            if(seq[i]=='('){
                sz++;
                v.push_back(sz%2);
            }
            else {
                v.push_back(sz%2);
                sz--;
            }
        }
        return v;
    }
};