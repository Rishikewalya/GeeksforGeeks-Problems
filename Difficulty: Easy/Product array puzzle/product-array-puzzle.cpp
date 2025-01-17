//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size(); // Get the size of the input array
        
        vector<int> ans(n, 1); // Initialize the result array with all elements set to 1
        
        int prefixProd = 1; // Variable to store the product of elements to the left of the current index
        for (int i = 0; i < n; i++) { // First pass: calculate prefix products
            ans[i] = prefixProd; // Assign the prefix product to the current index in the result
            prefixProd = prefixProd * arr[i]; // Update the prefix product by multiplying it with the current element
        }
        
        int suffixProd = 1; // Variable to store the product of elements to the right of the current index
        for (int i = n - 1; i >= 0; i--) { // Second pass: calculate suffix products
            ans[i] = ans[i] * suffixProd; // Multiply the current value in the result with the suffix product
            suffixProd = suffixProd * arr[i]; // Update the suffix product by multiplying it with the current element
        }
        
        return ans; // Return the result array
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
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends