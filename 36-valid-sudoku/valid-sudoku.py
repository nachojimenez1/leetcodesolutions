class Solution(object):
    def isValidSudoku(self, board):
        visited_cols = [[] for _ in range(9)]
        visited_rows = [[] for _ in range(9)]
        visited_3x3 = [[] for _ in range(9)]

        for i in range(9):
            for j in range(9):
                elem = board[i][j]

                if elem != ".":

                    # columna
                    if elem in visited_cols[j]:
                        return False
                    visited_cols[j].append(elem)

                    # fila
                    if elem in visited_rows[i]:
                        return False
                    visited_rows[i].append(elem)

                    # bloque 3x3
                    box = (i // 3) * 3 + (j // 3)

                    if elem in visited_3x3[box]:
                        return False
                    visited_3x3[box].append(elem)

        return True