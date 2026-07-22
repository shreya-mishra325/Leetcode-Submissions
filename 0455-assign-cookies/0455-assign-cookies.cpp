class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0, j = 0; i < g.size() && j < s.size(); i++) {
            while (j < s.size()) {
                if (s[j] >= g[i]) {
                    count++;
                    j++;      
                    break; 
                }
                j++;
            }
        }
        return count;
    }
};