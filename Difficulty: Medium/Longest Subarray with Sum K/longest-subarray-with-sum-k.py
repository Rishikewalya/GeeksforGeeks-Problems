# User function Template for python3

class Solution:
    def longestSubarray(self, arr, k):  
        preSum = {0: -1}
        currSum = 0
        ans = 0
        
        for i in range(len(arr)):
            currSum = currSum + arr[i]
            
            if currSum - k in preSum:
                ans = max(ans, i - preSum[currSum - k])
                
            if currSum not in preSum:
                preSum[currSum] = i

        return ans    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input().strip())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        k = int(input().strip())
        ob = Solution()
        print(ob.longestSubarray(arr, k))
        tc -= 1
        print("~")
# } Driver Code Ends