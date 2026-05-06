class Solution {
public:
    void merge(vector<int>& nums, int p, int q, int r){
        int n1=q-p+1;
        int n2=r-q;
        vector<int> arr(n1+1);
        vector<int> brr(n2+1);

        for(int i=0; i<n1; i++){
            arr[i]=nums[p+i];
        }
        for(int i=0; i<n2; i++){
            brr[i]=nums[q+i+1];
        }
        arr[n1]=INT_MAX;
        brr[n2]=INT_MAX;
        int i=0, j=0;
        for(int k=p; k<=r; k++){     
            if(arr[i]<=brr[j]){
                nums[k]=arr[i];
                i++;
            }
            else {
                nums[k]=brr[j];
                j++;
            }
        }
    }
    void mergeSort(vector<int>& nums, int p, int r) {
        if(p<r){
            int q=(p+r)/2;
            mergeSort(nums,p,q);
            mergeSort(nums,q+1,r);
            merge(nums, p, q, r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);     
        return nums;
    }
};