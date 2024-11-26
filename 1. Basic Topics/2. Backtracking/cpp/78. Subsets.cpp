class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        sort(nums.begin(), nums.end());
        backtrack(ans, tmp, nums,  0);
        return ans;
    }

    void backtrack(vector<vector<int>>& ans, vector<int>& tmp, vector<int>& nums, int start) {
        ans.push_back(tmp);    
        for(int i = start; i < nums.size(); i++) {
            tmp.push_back(nums[i]);
            backtrack(ans, tmp, nums, i + 1);
            tmp.pop_back();
        }
    }
};