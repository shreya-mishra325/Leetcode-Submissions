class Solution {
public:
    string minWindow(string s, string t) {
        int minlen = 1e9, sIndex = -1;
        int l = 0, r = 0;
        int count = 0;
        vector<int> hash(256, 0);

        for(char c : t) hash[c]++;

        while(r < s.size()){
            if(hash[s[r]] > 0) count++;
            hash[s[r]]--;

            while(count == t.size()){
                if(r - l + 1 < minlen){
                    minlen = r - l + 1;
                    sIndex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) count--;
                l++;
            }
            r++;
        }
        if(sIndex == -1) return "";
        return s.substr(sIndex, minlen);
    }
};