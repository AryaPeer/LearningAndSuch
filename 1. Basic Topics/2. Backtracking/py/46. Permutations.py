class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        tmp = []
        self.backtrack(nums, ans, tmp)
        return ans
        
    def backtrack(self, nums, ans, temp):
        if len(temp) == len(nums):
            ans.append(temp.copy())
            return
        for x in nums:
            if x in temp:
                continue
            temp.append(x)
            self.backtrack(nums,ans,temp)
            temp.pop()
