class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        
        // Check for special cases
        if (numRows == 1 || numRows >= n) {
            return s;
        }

        char A[numRows][n];
        string res;
        int pos = numRows - 1, k = 0, col;

        for (int j = 0; j < n; j++) {
            if (k >= n) {
                col = j;
                break;
            }

            if (pos == 0) {
                pos = numRows - 1;
            }

            if (pos == numRows - 1) {
                for (int i = 0; i < numRows; i++) {
                    if (k < n) {
                        A[i][j] = s[k++];
                    } else {
                        A[i][j] = '$';  // Use a placeholder character for empty spaces
                    }
                }
            } else {
                for (int i = 0; i < numRows; i++) {
                    if (pos == i && k < n) {
                        A[i][j] = s[k++];
                    } else {
                        A[i][j] = '$';
                    }
                }
            }
            pos--;
        }

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < col; j++) {
                if (A[i][j] != '$') {
                    res += A[i][j];
                }
            }
        }

        return res;
    }
};
