class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(), sorted.end());
        int largest=sorted[nums.size()-1];
        int smallest=sorted[0];
        int i=0, j=0;
        while(nums[i]!=smallest){
            i++;
        }
        while(nums[j]!=largest){
            j++;
        }
        if(i>j) swap(i,j);
        int one=j+1;
        int two=nums.size()-i;
        int three=(i+1)+(nums.size()-j);
        return min({one, two, three});
    }
};