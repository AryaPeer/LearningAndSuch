class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        highest = max(candies)
        returnArr = []
        for i in candies:
            if (i+extraCandies) >= highest:
                returnArr.append(True)
            else:
                returnArr.append(False)

        return returnArr