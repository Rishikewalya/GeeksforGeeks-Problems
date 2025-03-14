#User function template for Python

class Solution:
    def binarysearch(self, arr, k):
        # Code Here
        arr.sort()
        for i in range(0, len(arr)):
            if arr[i] == k:
                return i
            else:
                continue
        return -1



#{ 
 # Driver Code Starts
#Initial template for Python

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        k = int(input())
        arr = list(map(int, input().split()))
        ob = Solution()
        res = ob.binarysearch(arr, k)
        print(res)
        print("~")

# } Driver Code Ends