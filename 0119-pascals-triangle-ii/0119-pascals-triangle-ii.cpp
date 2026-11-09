class Solution {
public:
    vector<int> v;
    long long curr=1;
    vector<int> getRow(int rowIndex) {
        for(int i=0; i<=rowIndex; i++){
            v.push_back(curr);
            curr=curr*(rowIndex-i)/(i+1);
        }
        return v;
    }
};