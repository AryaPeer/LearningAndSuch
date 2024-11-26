class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = []
        tmp = []
        nums.sort()
        self.backtrack(ans, tmp, nums, 0)
        return ans
    
    def backtrack(self, ans: List[List[int]], tmp: List[int], nums: List[int], start: int) -> None:
        ans.append(list(tmp))  
        for i in range(start, len(nums)):
            tmp.append(nums[i])
            self.backtrack(ans, tmp, nums, i + 1)
            tmp.pop() 