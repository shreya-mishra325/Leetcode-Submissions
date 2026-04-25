class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum=0;
        for(int i=0; i<k; i++){
            leftSum += cardPoints[i];
        }
        int maxSum=leftSum;
        int rightSum=0;
        for(int i=0; i<k; i++){
            leftSum -= cardPoints[k-i-1];
            rightSum += cardPoints[cardPoints.size()-i-1];
            maxSum=max(maxSum, leftSum+rightSum);
        }
        return maxSum;
    }
};