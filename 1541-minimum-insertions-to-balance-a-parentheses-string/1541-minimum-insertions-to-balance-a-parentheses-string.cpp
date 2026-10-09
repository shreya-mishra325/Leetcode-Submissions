class Solution {
public:
    int minInsertions(string s) {
        int insertions=0;
        int open=0;
        int i=0;

        while(i<s.size()){
            if(s[i]=='('){
                open++;
            }
            else{
                if(i+1<s.size() && s[i+1]==')'){
                    i++;
                }
                else{
                    insertions++;
                }
                if(open==0){
                    insertions++;
                }
                else{
                    open--;
                }
            }
            i++;
        }
        insertions+=open*2;
        return insertions;
    }
};