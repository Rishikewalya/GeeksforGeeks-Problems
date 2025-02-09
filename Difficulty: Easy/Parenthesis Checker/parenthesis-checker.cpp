//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')) return false;
            else if (!st.empty() && st.top() == '(' && s[i] == ')') st.pop();
            else if (!st.empty() && st.top() == '{' && s[i] == '}') st.pop();
            else if (!st.empty() && st.top() == '[' && s[i] == ']') st.pop();
            else st.push(s[i]);
        }
        if(st.empty()) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends