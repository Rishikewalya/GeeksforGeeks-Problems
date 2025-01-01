//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        string x = to_string(n);
        for(int i = 0; i < x.length(); i++){
            if(x[i] == '0'){
                x[i] = '5';
            }
        }
        return stoi(x);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends