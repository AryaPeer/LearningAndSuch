class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        ans = []
        tmp = []
        self.backtrack(candidates, target, ans, tmp, 0)
        return ans

    def backtrack(self, candidates: List[int], target: int, ans: List[List[int]], tmp: List[int], start: int) -> None:
        if target == 0:
            ans.append(list(tmp))
            return
        for i in range(start, len(candidates)):
            if i > start and candidates[i] == candidates[i - 1]:
                continue
            if target < candidates[i]:
                break
            tmp.append(candidates[i])
            self.backtrack(candidates, target - candidates[i], ans, tmp, i + 1)
            tmp.pop()