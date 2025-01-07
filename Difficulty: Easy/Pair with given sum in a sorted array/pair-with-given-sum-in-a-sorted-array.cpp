//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Initialize an unordered_map to store the frequency of elements.
        unordered_map<int, int> res;
        
        // Initialize the count of valid pairs.
        int count = 0;
        
        // Get the size of the input array.
        int n = arr.size();
        
        // Iterate through the array
        for(int i = 0; i < n; i++) {
            // Calculate the complement required to sum up to the target
            int temp = target - arr[i];
            
            // If the complement exists in the map, add its frequency to count.
            // This means we have already encountered numbers that sum up to the target with arr[i].
            if (res.find(temp) != res.end()) {
                count += res[temp];
            }
            
            // Update the frequency of the current number arr[i] in the map.
            // We do this after checking for pairs to avoid counting the same element as part of a pair with itself.
            res[arr[i]]++;
        }
        
        // Return the total number of pairs found
        return count;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends