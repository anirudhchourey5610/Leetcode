class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    double avgSum = 0;
    double maxAvg = 0;
    for (int i = 0; i < k; i++) {
        avgSum += nums[i];
    }
    maxAvg=avgSum/k;  
    for (int i = k; i < n; i++) {  
        avgSum = avgSum - nums[i - k] + nums[i];
        maxAvg = max(maxAvg, avgSum/k);
    }
    return maxAvg;
    }
};