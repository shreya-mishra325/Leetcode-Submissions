class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i=0; i<tasks.size(); i++){
            freq[tasks[i]-'A']++;
        }
        priority_queue<int> pq;
        for(int i=0; i<freq.size(); i++){
            if(freq[i]>0) pq.push(freq[i]);
        }
        queue<pair<int,int>> q;
        int time=0;
        while(!pq.empty() || !q.empty()){
            time++;
            if(!q.empty() && q.front().second==time){
                pq.push(q.front().first);
                q.pop();
            }
            if(!pq.empty()){
                int k=pq.top();
                pq.pop();
                k--;
                if(k>0){
                    q.push({k, time+n+1});
                }
            }
        }
        return time;
    }
};