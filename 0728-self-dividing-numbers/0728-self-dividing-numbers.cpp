class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left; i<=right; i++){
            int temp=i;
            bool isSelfDividing = true;
            while(temp){
               int rem=temp%10;
               if (rem==0 || i % rem!=0) {
                    isSelfDividing = false;
                    break;
                }
               temp=temp/10;
            }
            if(isSelfDividing) v.push_back(i);
        }
        return v;
    }
};