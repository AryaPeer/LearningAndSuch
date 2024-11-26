class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &tmp, int start){
        if(target == 0){
            ans.push_back(tmp);
            return;
        }
        for(int i = start; i<candidates.size() && target >=candidates[i]; i++){
            tmp.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], ans, tmp, i);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        backtrack(candidates, target, ans, tmp, 0);
        return ans;
    }
};