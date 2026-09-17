class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int> len(n, INT_MAX);
        vector<int> prefix(n, INT_MAX);
        vector<int> suffix(n, INT_MAX);
        vector<int> endLen(n, INT_MAX);
        vector<int> startLen(n, INT_MAX);

        int left=0, sum=0;
        for(int right=0; right<n; right++){
            sum=sum+arr[right];
            while(sum>target){
                sum=sum-arr[left];
                left++;
            }
            if(sum==target){
                int length = right-left+1;
                startLen[left] = length;
                endLen[right] = length;
            }
        }
        for(int i=0; i<n; i++){
            prefix[i]=endLen[i];;
            if(i>0){
                prefix[i]=min(prefix[i-1],prefix[i]);
            }
        }
        for(int i=n-1; i>=0; i--){
            suffix[i]=startLen[i];
            if(i<n-1){
                suffix[i]=min(suffix[i+1],suffix[i]);
            }
        }
        int ans=INT_MAX;
        for(int i=1; i<n; i++){
            if(prefix[i-1]!=INT_MAX && suffix[i]!=INT_MAX){
                ans=min(ans,prefix[i-1]+suffix[i]);
            }
        }
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};