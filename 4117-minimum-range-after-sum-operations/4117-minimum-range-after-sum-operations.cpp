class Solution {
public:
    int minRange(int a, int b, int c) {
        int ans=INT_MAX;
        int x=a;
        int y=b;
        int z=c;
        ans=min(ans,max({x,y,z})-min({x,y,z}));
        x=b+c;
        ans=min(ans,max({x,y,z})-min({x,y,z}));
        x=a;
        y=a+c;
        ans=min(ans,max({x,y,z})-min({x,y,z}));
        y=b;
        z=a+b;
        ans=min(ans,max({x,y,z})-min({x,y,z}));
        return ans;
        
        
    }
};