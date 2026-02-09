////////////////////// N_Queen 2

// class Solution {
// public:        
//     vector<vector<char>> grid;              

//     bool canplacequeen(int row, int col, int n) {
//         // Check column (upwards)
//         for (int i = row - 1; i >= 0; i--) {
//             if (grid[i][col] == 'Q')  return false;
//         }

//         // Check left diagonal (upwards)
//         for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
//             if (grid[i][j] == 'Q')  return false;
//         }

//         // Check right diagonal (upwards)
//         for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
//             if (grid[i][j] == 'Q')  return false;
//         }
//         return true; 
//     }

//     unordered_set<string> st;
//     void f(int row, int n) {
//         if (row == n) {  // base case
//         string res = "";
//             for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                     res += grid[i][j];
//                 }
//             }
//             st.insert(res);
//             return;
//         }

//         for (int col = 0; col < n; col++) {
//             if (canplacequeen(row, col, n)) {
//                 grid[row][col] = 'Q';
//                 f(row + 1, n);  
//                 grid[row][col] = '.'; // backtrack
//             }
//         }
//     }

//     int totalNQueens(int n) {
//         grid.resize(n, vector<char>(n, '.'));
//         f(0, n);
//         return st.size();
//     }
// };

    
        
