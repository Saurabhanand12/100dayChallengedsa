///  20 leetcode

// class Solution {
// public:
//     bool isValid(string s) {
//         if(s.size() % 2 != 0 ) return false;

//         stack<char> st;
        
//         for(int i=0;i<s.size();i++){
//             if(s[i] == '(' || s[i] == '{' || s[i] == '[')  st.push(s[i]);
//             else{
//                 if(st.size() == 0 ) return false;
//                 char top = st.top();
//                 st.pop();
//                 if((top == '(' and s[i] != ')') || (top == '[' and s[i] != ']')|| (top == '{' and s[i] != '}') )  return false;
//             } 
//         }
//         if(st.size() !=  0 ) return false;
        
//         return true;
//     }
// };

///////////////////////////////////////////////////////////////////////////
// 32 longest valid parenthese
// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         stack<int> st;
//         st.push(-1);   
//         int maxLen = 0;
        
//         for(int i=0;i<s.size();i++){
//             if(s[i] == '(')  st.push(i);
//             else{
//                 st.pop();
//                 if(st.size() == 0 ) st.push(i);
//                 else{
//                     maxLen = max(maxLen,i-st.top());
//                 }
//             } 
//         }
//         return maxLen;
//     }
// };