class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int a=0, b=0;
        int n=rain.size();
        vector<string> ans;
        for(int i=0; i<rain.size(); i++){
            if(rain[i]==1){
                if(i+1<n && rain[i+1]==1 && a<=b){
                    ans.push_back("Alice");
                    a++;
                }
                else {
                    ans.push_back("Bob");
                    b++;
                }
            }
            else{
                ans.push_back("None");
            }
        }
        return ans;
    }
};