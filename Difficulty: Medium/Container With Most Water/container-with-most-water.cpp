//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxWater(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1; // Use arr.size() for length
        int ans = 0;
        while (left < right) {
            int tempwater = min(arr[left], arr[right]) * (right - left); // Use arr instead of A
            ans = max(ans, tempwater);
            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        return ans; // Add return statement
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends