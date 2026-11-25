class Solution {
public:
    vector<int> ans;
    void count(int n){
        int count=0;
        while(n){
            if(n%2==1) count++;
            n=n/2;
        }
        ans.push_back(count);
    }
    vector<int> countBits(int n) {
        for(int i=0; i<=n; i++){
            count(i);
        }
        return ans;
    }
};