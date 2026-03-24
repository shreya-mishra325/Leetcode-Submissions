class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastA = -1, lastB = -1, lastC = -1;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') lastA = i;
            else if(s[i] == 'b') lastB = i;
            else lastC = i;

            int minLast = min(lastA, min(lastB, lastC));

            if(minLast != -1) {
                count += (minLast + 1);
            }
        }
        return count;
    }
};