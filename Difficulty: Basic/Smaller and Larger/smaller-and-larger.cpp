//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int n = arr.size();
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] <= target){
                c1++;
            }
            if(arr[i] >= target){
                c2++;
            }
        }
        return{c1,c2};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        vector<int> ans = ob.getMoreAndLess(arr, x);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends