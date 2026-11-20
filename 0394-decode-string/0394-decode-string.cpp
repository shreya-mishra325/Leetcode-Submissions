class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string>st;
        string ans="";
        int num=0;

        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                nums.push(num);
                st.push(ans);
                num=0;
                ans="";
            }
            else if(s[i]==']'){
                int k=nums.top();
                nums.pop();
                string temp=st.top();
                st.pop();

                while(k--){
                    temp+=ans;
                }
                ans=temp;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};