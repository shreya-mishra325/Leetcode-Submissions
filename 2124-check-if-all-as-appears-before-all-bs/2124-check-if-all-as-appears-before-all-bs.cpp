class Solution {
public:
    bool checkString(string s) {
        bool flag=true;
        int i=0;
        while(i<s.size() && s[i]!='b'){
            i++;
        }
        while(i<s.size() && i!=s.size()){
            if(s[i]=='a') flag=false;
            i++;
        }
        return flag;
    }
};