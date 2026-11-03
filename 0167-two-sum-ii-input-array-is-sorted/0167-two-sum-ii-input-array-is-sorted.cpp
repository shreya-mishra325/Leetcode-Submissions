class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
            int low=i+1, high=numbers.size()-1;
            int first=numbers[i];
            int second=target-numbers[i];
            while(low<=high){
            int mid=(low+high)/2;
                if(numbers[mid]==second) return {i+1, mid+1};
                else if(numbers[mid]<second){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }  
        return {};  
    }
};