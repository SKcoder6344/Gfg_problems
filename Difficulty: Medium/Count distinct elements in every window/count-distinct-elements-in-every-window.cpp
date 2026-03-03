class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> result;
        
        unordered_map<int, int> freq;
        
        for (int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }
        
        result.push_back(freq.size());
        
        for (int i = k; i < n; i++) {
            freq[arr[i - k]]--;
            if (freq[arr[i - k]] == 0) {
                freq.erase(arr[i - k]);
            }
            
            freq[arr[i]]++;
            
            result.push_back(freq.size());
        }
        return result;
    }
};