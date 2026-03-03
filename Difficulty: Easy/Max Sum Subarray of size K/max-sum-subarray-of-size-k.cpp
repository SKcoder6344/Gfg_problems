class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        long long currentSum = 0;
        

        for (int i = 0; i < k; i++) {
            currentSum += arr[i];
        }
        
        long long maxSum = currentSum;
        
        for (int i = k; i < n; i++) {
            currentSum = currentSum - arr[i - k] + arr[i];
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};