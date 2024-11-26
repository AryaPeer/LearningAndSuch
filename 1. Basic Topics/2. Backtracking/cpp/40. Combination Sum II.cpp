class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        backtrack(candidates, target, ans, tmp, 0);
        return ans;
    }

    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& tmp, int start) {
        if(target == 0) {
            ans.push_back(tmp);
            return;
        }
        for(int i = start; i < candidates.size() && target >= candidates[i]; i++){
            if(i != start && candidates[i] == candidates[i - 1]){
                continue;
            } 
            tmp.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], ans, tmp, i + 1);
            tmp.pop_back();
        }
    }
};