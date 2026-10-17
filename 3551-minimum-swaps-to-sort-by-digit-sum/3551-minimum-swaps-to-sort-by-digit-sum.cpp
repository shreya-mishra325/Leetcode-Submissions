class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted=nums;
        sort(sorted.begin(), sorted.end(), [&](int a, int b){
            int x=digitsum(a);
            int y=digitsum(b);
            if(x==y) return a<b;
            return x<y;
        });
        unordered_map<int, int> pos;
        for(int i=0; i<n; i++) {
            pos[sorted[i]] = i;
        }
        vector<bool> visited(n, false);
        int swaps=0;
        for(int i=0; i<n; i++) {
            if(visited[i]) continue;
            int j=i;
            int count=0;
            while(!visited[j]) {
                visited[j]=true;
                j=pos[nums[j]];
                count++;
            }
            if(count>1) {
                swaps+=count-1;
            }
        }
        return swaps;
    }
};