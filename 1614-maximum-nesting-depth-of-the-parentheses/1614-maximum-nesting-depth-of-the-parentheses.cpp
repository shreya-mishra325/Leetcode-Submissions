class Solution {
public:
    int maxDepth(string s) {
        int maxparen=0;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
            count++;
            if(count>maxparen)
            maxparen = count;
            }
            else if(s[i]==')')
            count--;
        }
    return maxparen;     
    }
};