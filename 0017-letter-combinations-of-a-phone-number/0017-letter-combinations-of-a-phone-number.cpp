class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ans;
        unordered_map<int, string> mpp;
        mpp['2'] = "abc"; mpp['3'] = "def"; mpp['4'] = "ghi"; mpp['5'] = "jkl"; 
        mpp['6'] = "mno"; mpp['7'] = "pqrs"; mpp['8'] = "tuv"; mpp['9'] = "wxyz";

        ans.push_back("");
        for(char digit:digits){
            vector<string> temp;
            for(string s:ans){
                for(char c:mpp[digit]){
                    temp.push_back(s+c);
                }
            }
            ans=temp;
        }
        return ans;
    }
};