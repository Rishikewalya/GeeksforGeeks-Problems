//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.length();
        int i=0;
        int j=0;
        map<int,int>m;
        int ans = 0;
        while(i<n){
            m[s[i]]++;
            if(m[s[i]]>1){
                while(j<i && m[s[i]]>1){
                    m[s[j++]]--;
                }
            }
            ans = max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends