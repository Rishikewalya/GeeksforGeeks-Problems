//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int count = 0; // Initialize the variable to store the count of triplets.
        int n = arr.size(); // Get the size of the input array.

        // Loop through the array to pick the first element of the triplet (i).
        for (int i = 0; i <= n - 3; i++) {
            int j = i + 1, k = n - 1; // Set two pointers: j starts from i+1 and k starts from the end of the array.

            // While j is less than k, we try to find pairs (j, k) that form valid triplets with arr[i].
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k]; // Calculate the sum of the triplet (arr[i], arr[j], arr[k]).

                // If the sum is greater than the target, move the right pointer (k) leftwards to reduce the sum.
                if (sum > target) {
                    k--;
                }
                // If the sum is less than the target, move the left pointer (j) rightwards to increase the sum.
                else if (sum < target) {
                    j++;
                }
                // If the sum is equal to the target, it means we found a valid triplet.
                else if (sum == target) {
                    count++; // Increment the count for the found triplet.

                    // After finding a valid triplet, check for duplicate values for the second (j) and third (k) elements.
                    int temp = j + 1; // Start with the next index after j.
                    
                    // While there are duplicate elements between j and k, increment count and move j to the next distinct element.
                    while (temp < k && arr[temp] == arr[temp - 1]) {
                        count++; // Increment the count for each duplicate triplet.
                        temp++;
                    }

                    // After counting the duplicates, move the right pointer (k) leftwards to continue searching for other triplets.
                    k--;
                }
            }
        }

        return count; // Return the total count of triplets found.
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends