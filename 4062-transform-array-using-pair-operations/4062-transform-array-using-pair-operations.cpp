class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        if(source.size()!=target.size()) return false;
        long long sum1=0, sum2=0;
        for(int i=0; i<source.size(); i++){
            sum1=sum1+source[i];
        }
        for(int i=0; i<target.size(); i++){
            sum2=sum2+target[i];
        }
        if(sum1!=sum2) return false;
        return true;
    }
};