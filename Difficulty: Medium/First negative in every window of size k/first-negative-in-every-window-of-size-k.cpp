class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> result;
        queue<int> q; 
        
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                q.push(i);
            }
        }
        
        for (int i = k; i <= n; i++) {
            if (!q.empty()) {
                result.push_back(arr[q.front()]);
            } else {
                result.push_back(0);
            }
            if (i == n) 
            break;
            

            while (!q.empty() && q.front() <= i - k) {
                q.pop();
            }
            
            if (arr[i] < 0) {
                q.push(i);
            }
        }
        
        return result;
    }
};