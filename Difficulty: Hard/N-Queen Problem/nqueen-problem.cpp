//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isSafe(vector<int> &board, int row, int col, int n) {
        // Check for queen in the same column
        for (int i = 0; i < row; i++) {
            if (board[i] == col) return false;
        }
        // Check left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i] == j) return false;
        }
        // Check right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i] == j) return false;
        }
        return true;
    }

    void solveQueen(vector<int> &board, int row, int n, vector<vector<int>> &ans) {
        // Base case: All queens placed
        if (row == n) {
            vector<int> solution;
            for (int col : board) {
                solution.push_back(col + 1); // Convert to 1-based indexing
            }
            ans.push_back(solution);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j, n)) {
                board[row] = j;  // Place queen
                solveQueen(board, row + 1, n, ans);
                board[row] = -1;  // Backtrack
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        vector<int> board(n, -1);  // Track queen positions
        vector<vector<int>> ans;
        solveQueen(board, 0, n, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends