// Approach 1: Brute-force — collect all elements into a vector, sort, and return the k-th smallest
// Time Complexity: O(n² log(n²)) = O(n² log n) due to sorting n² elements
// Space Complexity: O(n²) for storing all elements
class Solution {
public:
    int kthSmallest(vector<vector<int> >& matrix, int k) {
        int n = matrix.size();

        vector<int> result;                // store all matrix elements

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result.push_back(matrix[i][j]);
            }
        }
        sort(result.begin(), result.end()); // sort ascending
        return result[k - 1];               // return k-th smallest (1-based)
    }
};