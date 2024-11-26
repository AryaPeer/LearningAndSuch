class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        tmp = []
        candidates.sort() 
        self.backtrack(candidates, target, ans, tmp, 0)
        return ans

    def backtrack(self, candidates, target, ans, tmp, start):
        if target == 0:
            ans.append(tmp.copy())  
            return
        for i in range(start, len(candidates)):
            if target < candidates[i]:
                break
            tmp.append(candidates[i])
            self.backtrack(candidates, target - candidates[i], ans, tmp, i)
            tmp.pop()