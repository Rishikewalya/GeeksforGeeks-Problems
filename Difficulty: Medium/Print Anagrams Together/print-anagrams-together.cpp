//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        vector<vector<string>>ans; //Resultant vector to store the group of anagrams
        unordered_map<string, vector<string>>mp; // hash map to store the group words in sorted manner
        
        for(int i = 0; i < arr.size(); i++){ // Iterating each word in the array
            string s = arr[i]; //Take the current word
            sort(s.begin(), s.end()); //Sort the word in alphabetical form to find its key 
            
            mp[s].push_back(arr[i]); //Group the original word to its sorted form
        }
        for(auto it : mp){ //Iterating through the hash map to find the key value pair
            ans.push_back(it.second); //Add the group of value to the result
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends