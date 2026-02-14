class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> map1(256, -1);
        vector<int> map2(256, -1);      
        for(int i=0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];
                if (map1[s[i]] != map2[t[i]]) return false;
                map1[s[i]] = i+1;
                map2[t[i]] = i+1;
        }
        return true;        
    }
};