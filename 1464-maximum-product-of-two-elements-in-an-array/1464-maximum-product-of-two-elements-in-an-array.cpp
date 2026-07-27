class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=INT_MIN, second=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>largest){
                second=largest;
                largest=nums[i];
            }
            else if(nums[i]>second){
                second=nums[i];
            }
        }
        return (largest - 1) * (second - 1);
    }
};