class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        rows, colums = len(A), len(A[0])
        for i in range(rows):
            for j in range(colums // 2):
                
                head = 0 if A[i][colums - 1 - j] == 1 else 1
                tail = 0 if A[i][j] == 1 else 1
                
                A[i][j] = head
                A[i][colums - 1 -j] = tail
            
            if colums & 1:
                A[i][colums // 2] = 0 if A[i][colums // 2] == 1 else 1
            
        return A