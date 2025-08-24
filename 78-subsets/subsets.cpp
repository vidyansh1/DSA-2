class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> ans;
        int n = nums.size();
        for (int mask = 0; mask < (1 << n); mask++)
        {
            ans.clear();  // Clear the subset before starting a new one
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    ans.push_back(nums[i]);
                }
            }
            arr.push_back(ans);
        }
        return arr;
    }
};