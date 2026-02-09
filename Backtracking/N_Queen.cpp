// N_Queen 1

// class Solution {
// public:
//     vector<vector<string>> result;          
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

    
//     void f(int row, int n) {
//         if (row == n) {  // base case
//             vector<string> temp;
//             for (int i = 0; i < n; i++) {
//                 string res = "";
//                 for (int j = 0; j < n; j++) {
//                     res += grid[i][j];
//                 }
//                 temp.push_back(res);
//             }
//             result.push_back(temp);
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
//     vector<vector<string>> solveNQueens(int n) {
//         grid.resize(n, vector<char>(n, '.'));
//         f(0, n);
//         return result;
//     }
// };
