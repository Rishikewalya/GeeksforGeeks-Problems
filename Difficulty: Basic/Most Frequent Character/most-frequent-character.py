#User function Template for python3

class Solution:
    
    #Function to find the maximum occurring character in a string.
    def getMaxOccurringChar(self, s):
        freq = {}
        s = sorted(s)
        for item in s:
            if item in freq:
                freq[item] = freq[item] + 1
            else:
                freq[item] = 1
            
        max_char = max(freq, key = freq.get)
        return max_char


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        print(Solution().getMaxOccurringChar(s))
        print("~")

# } Driver Code Ends