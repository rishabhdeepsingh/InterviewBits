class Solution {
  public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int diff = arr[2] - arr[1];
        for (int i = 0; i < n - 1; ++i) {
            diff = min(arr[i + 1] - arr[i], diff);
        }
        vector<vector<int>> res;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i + 1] - arr[i] == diff) {
                res.push_back(vector<int>{arr[i], arr[i + 1]});
            }
        }
        return res;
    }
};
