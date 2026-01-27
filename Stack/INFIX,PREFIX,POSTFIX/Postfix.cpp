//infix to postfix
// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// int prio(char ch){
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;
// }

// string solve(string val1,string val2 ,char ch){
//     string s="";
//     s += val1;
//     s += val2;
//     s.push_back(ch);
//     return s;
// }

// int main() {
//     string s = "(7+9)*4/8-3";

//     stack<string> val;
//     stack<char> op;

//     for(int i=0;i<s.size();i++){
//         if(s[i] == ' ') continue; 

//         if(s[i] >= 48 && s[i] <= 57)  val.push(to_string(s[i]-48));
//         else{
//             if(op.size() == 0) op.push(s[i]);
//             else if(s[i] == '(' || op.top() == '(' ) op.push(s[i]);
//             else if(s[i] == ')'){
//                 while(op.top() != '('){
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top();
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1,val2,ch);
//                     val.push(ans);
//                 }
//                 op.pop();
//             }
//             else if(prio(s[i]) > prio(op.top()) ) op.push(s[i]);
//             else{
//                 while(op.size() > 0 && prio(s[i]) <= prio(op.top()) ){
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top();
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1,val2,ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);
//             }
//         }
//     }
//     while(op.size() >  0){
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string ans = solve(val1,val2,ch);
//         val.push(ans);
//     }

//     cout<<val.top();

// return 0;
// }

//////////////////////////////////////////////////////
// postfix Evalution 
// #include<iostream>
// #include<stack> 
// #include<string> 
// using namespace std;

// int solve(int v1 , int v2, char ch){
//     if(ch == '+') return v1+v2;
//     else if(ch == '-') return v1-v2;
//     else if(ch == '*') return v1*v2;
//     else return v1/v2;
// }

// int main() {
//     string  s = "79+4*8/3-";
//     stack<int> val;

//     for(int i=0;i<s.size();i++){
//         if(s[i] >= 48 && s[i] <= 57)  val.push(s[i]-48);
//         else{
//             int v2 = val.top();
//             val.pop();
//             int v1 = val.top();
//             val.pop();
//             int ans = solve(v1,v2,s[i]);
//             val.push(ans);
//         }
//     }

//     cout<<val.top()<<endl;
//     cout<<(7+9)*4/8-3<<endl;

// return 0;
// }