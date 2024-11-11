class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [set() for i in range(9)]
        cols = [set() for i in range(9)]
        subboxes = [set() for i in range(9)]

        for i in range(9):
            for j in range(9):
                num = board[i][j]
                if num != '.':
                    box_index = (i // 3) * 3 + (j // 3)
                    
                    if num in rows[i] or num in cols[j] or num in subboxes[box_index]:
                        return False

                    rows[i].add(num)
                    cols[j].add(num)
                    subboxes[box_index].add(num)
        return True
