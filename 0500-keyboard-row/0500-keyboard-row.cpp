class Solution {
public:
    bool present(string row, char ch){
        for(int i=0; i<row.size(); i++){
            if (row[i]==ch) return true;
        }
        return false;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        for(int i=0; i<words.size(); i++){
            string str=words[i];
            for(int j=0; j<str.size(); j++){
                str[j]=tolower(str[j]);
            }
            string row;
            if(present(row1, str[0])) row=row1;
            else if(present(row2, str[0])) row=row2;
            else row=row3;

            bool possible=true;
            for(int j=0; j<str.size(); j++){
                if (!present(row, str[j])) {
                    possible = false;
                    break;
                }
            }
            if(possible) v.push_back(words[i]);
        }
        return v;
    }
};