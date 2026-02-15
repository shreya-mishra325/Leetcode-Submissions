class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int arr[5001] = {0}, brr[5001] = {0};
        for(int i=0; i<s.size(); i++){
            arr[s[i]] = arr[s[i]]+1;
        }
        for(int i=0; i<t.size(); i++){
            brr[t[i]] = brr[t[i]]+1;
        }
        for(int i=0; i<s.size(); i++){
            if(arr[s[i]] != brr[s[i]])
            return false;
        }
        return true;
    }
};