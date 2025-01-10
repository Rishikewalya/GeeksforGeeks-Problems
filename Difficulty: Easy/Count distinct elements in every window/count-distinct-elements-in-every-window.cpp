//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // Result vector to store the count of distinct elements in each subarray of size k
        vector<int> ans;
        
        // Unordered map to store the frequency of elements in the current window of size k
        unordered_map<int, int> mp;

        // Step 1: Initialize the map with the first window of size k
        for (int i = 0; i < k; i++) {
            mp[arr[i]]++; // Increment the frequency of the current element
        }

        // Store the count of distinct elements in the first window
        ans.push_back(mp.size());

        int n = arr.size(); // Get the size of the array

        // Step 2: Slide the window across the array
        for (int i = k; i < n; i++) {
            // Add the next element in the array to the window
            mp[arr[i]]++;

            // Remove the element that is sliding out of the window
            mp[arr[i - k]]--;

            // If the frequency of the element sliding out becomes zero, remove it from the map
            if (mp[arr[i - k]] <= 0) {
                mp.erase(arr[i - k]);
            }

            // Store the count of distinct elements in the current window
            ans.push_back(mp.size());
        }

        // Return the result vector containing the count of distinct elements for each window
        return ans;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends