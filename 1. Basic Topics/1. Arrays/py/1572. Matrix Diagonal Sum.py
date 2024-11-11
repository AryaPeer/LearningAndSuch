class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        result = 0

        for row in range(len(mat)):
            col = row

            result += mat[row][col]

            col = len(mat)-row-1

            if(col!=row):
                result += mat[row][col]

        return result