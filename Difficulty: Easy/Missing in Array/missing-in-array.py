#User function Template for python3
class Solution:
    def missingNumber(self, arr):
        n = len(arr) + 1  # The size of the full array including the missing number
        totalSum = n * (n + 1) // 2  # Sum of first n natural numbers
        arrSum = sum(arr)  # Sum of elements in the array
        return totalSum - arrSum  # The missing number
#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    arr = list(map(int, input().split()))
    s = Solution().missingNumber(arr)
    print(s)

    print("~")
# } Driver Code Ends