class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        do {
            ans.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return ans;
    }
};

class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& tmp){
        if ((int) tmp.size() == (int) nums.size()) {
            ans.push_back(tmp);
            return;
        }
        for (auto x : nums) {
            if (find(tmp.begin(), tmp.end(), x) != tmp.end()) continue;
            tmp.push_back(x);
            backtrack(nums, ans, tmp);
            tmp.pop_back();   
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        backtrack(nums, ans, tmp);
        return ans;
    }
};