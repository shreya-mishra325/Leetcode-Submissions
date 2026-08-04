class Solution {
public:
    static bool cmp(string &a, string &b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int x:nums){
            s.push_back(to_string(x));
        }
        sort(s.begin(), s.end(), cmp);
        if(s[0]=="0") return "0";
        string ans="";
        for(int i=0; i<s.size(); i++){
            ans=ans+s[i];
        }
        return ans;  
    }
};