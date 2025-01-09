//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<string>v;
    string encode(vector<string>& s) {
        string str = "";
        v = s;
        for(int i = 0; i < s.size(); i++){
            str = str + s[i];
        }
        return str;
    }

    vector<string> decode(string& s) {
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        string word;
        vector<string> s;

        while (ss >> word) {
            s.push_back(word);
        }

        Solution obj;
        string encodedString = obj.encode(s);
        vector<string> decodedStrings = obj.decode(encodedString);

        for (string x : decodedStrings) {
            cout << x << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends