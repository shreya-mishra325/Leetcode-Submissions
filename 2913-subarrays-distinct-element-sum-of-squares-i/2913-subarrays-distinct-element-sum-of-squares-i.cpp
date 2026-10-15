class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                int count = 0;

                for (int k = i; k <= j; k++) {
                    bool duplicate = false;

                    for (int l = i; l < k; l++) {
                        if (nums[k] == nums[l]) {
                            duplicate = true;
                            break;
                        }
                    }

                    if (!duplicate) {
                        count++;
                    }
                }
                ans += count * count;
            }
        }
        return ans;
    }
};