#User function Template for python3
class Solution:
    def minJumps(self, arr):
        if arr[0] == 0:
            return -1
        n = len(arr)
        if n == 1:
            return 0
        l = r = Max = steps = 0
        for i in range (0, n):
            if l > r:
                return -1
            if r >= n - 1:
                return steps
            Max = max(Max, i + arr[i])
            if i == r:
                l = i + 1
                r = Max
                steps = steps + 1
        return steps
	  
	   


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        # n = int(input())
        Arr = [int(x) for x in input().split()]
        ob = Solution()
        ans = ob.minJumps(Arr)
        print(ans)
        print("~")
# } Driver Code Ends