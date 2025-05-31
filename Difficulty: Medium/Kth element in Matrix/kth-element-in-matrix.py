class Solution:
    def kthSmallest(self, matrix, k):
        n = len(matrix)
        result = []
        
        for i in range(n):
            for j in range(n):
                result.append(matrix[i][j])
        result.sort()
        return result[k - 1]