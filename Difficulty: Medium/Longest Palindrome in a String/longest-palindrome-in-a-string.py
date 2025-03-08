
class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n < 2:
            return s  # Single character or empty string is already a palindrome
        
        start, max_len = 0, 1

        def expandAroundCenter(left: int, right: int) -> None:
            nonlocal start, max_len
            while left >= 0 and right < n and s[left] == s[right]:
                if (right - left + 1) > max_len:
                    start = left
                    max_len = right - left + 1
                left -= 1
                right += 1

        for i in range(n - 1):
            expandAroundCenter(i, i)     # Odd-length palindromes
            expandAroundCenter(i, i + 1) # Even-length palindromes

        return s[start:start + max_len]



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()

        ob = Solution()

        ans = ob.longestPalindrome(S)

        print(ans)
        print("~")
# } Driver Code Ends