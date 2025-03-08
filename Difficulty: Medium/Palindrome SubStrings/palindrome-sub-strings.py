#User function Template for python3

class Solution:
    def countPS(self, s: str) -> int:
        n = len(s)
        count = 0
        
        def expandAroundCenter(left: int, right: int) -> None:
            nonlocal count
            while left >= 0 and right < n and s[left] == s[right]:
                if right - left + 1 >= 2:  # Count only if length >= 2
                    count += 1
                left -= 1
                right += 1
        
        for i in range(n):
            # Odd-length palindromes
            expandAroundCenter(i, i)
            # Even-length palindromes
            expandAroundCenter(i, i + 1)
        
        return count


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        s = input()

        solObj = Solution()

        print(solObj.countPS(s))

        print("~")
# } Driver Code Ends