class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        length = len(A)
        for i in range(length):
            A[i] = A[i] * A[i]
            
        A.sort()
        
        return A