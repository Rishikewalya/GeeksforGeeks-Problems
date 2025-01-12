//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return 0; // No water can be trapped with less than 3 bars

        // Find the index of the maximum element
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[max]) {
                max = i;
            }
        }

        int water = 0;

        // Calculate water trapped to the left of the max element
        int left_max = 0;
        for (int i = 0; i < max; i++) {
            if (arr[i] > left_max) {
                left_max = arr[i];
            } else {
                water += (left_max - arr[i]);
            }
        }

        // Calculate water trapped to the right of the max element
        int right_max = 0;
        for (int i = n - 1; i > max; i--) {
            if (arr[i] > right_max) {
                right_max = arr[i];
            } else {
                water += (right_max - arr[i]);
            }
        }

        return water;
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