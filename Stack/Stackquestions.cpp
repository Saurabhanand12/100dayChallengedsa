// Balance Bracket 
// #include<iostream>
// #include<stack>
// using namespace std;
// bool isBalanced(string s){
//     if( s.size()%2 != 0 ) return false;

//     stack<int> st;
//     for(int i=0;i<s.size();i++){
//         if(s[i] == '(') st.push(s[i]);
//         else{
//             if(st.size() == 0) return false;
//             st.pop();
//         }
//     }
//     if(st.size() == 0 ) return true;
//     else return false;
// }
// int main() {
//     string s= "((()()()))";
//     cout<<isBalanced(s)<<endl;

// return 0;
// }

// REMOVE CONSECUTIVE DUPLICATES IN THE STRING
// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;

// string removeduplicate(string s){
//     stack<char> st;
//     st.push(s[0]);

//     for(int i = 1; i < s.size(); i++){
//         if(s[i] != st.top())
//             st.push(s[i]);
//     }

//     string ans = "";
//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main() {
//     string s = "aabbbbcccddddddddddddddeffgggggggh";
//     string k = removeduplicate(s);
//     cout << k << endl;
//     return 0;
// }
