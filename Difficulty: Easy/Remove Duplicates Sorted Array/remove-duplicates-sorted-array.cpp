class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        if (n <= 1) return arr;
        int writeIndex = 0;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[writeIndex]) {
                writeIndex++;
                arr[writeIndex] = arr[i];
            }
        }
        arr.resize(writeIndex + 1);
        return arr;
    }
};