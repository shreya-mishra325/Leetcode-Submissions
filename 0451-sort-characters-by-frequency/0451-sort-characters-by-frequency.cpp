class Solution {
public:
    static bool comp(pair<char, int> a, pair<char, int> b){
        if(a.second!=b.second) return a.second>b.second;
        return a.first < b.first;
    }
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(char c : s){
            mpp[c]++;
        }
        vector<pair<char,int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), comp);
        string ans ="";
        for(auto &p : vec){
            ans+=string(p.second, p.first);
        }
        return ans;
    }
};