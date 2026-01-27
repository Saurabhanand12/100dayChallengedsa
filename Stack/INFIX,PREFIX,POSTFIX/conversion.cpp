//postfix to prefix
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string solve(string val1,string val2 , char ch){
    string s = "";
    s.push_back(ch);
    s +=val1;
    s +=val2;
    return s;
}

int main() {
    string s ="79+4*8/3-";

    stack<string> val;

    for(int i=0;i<s.size();i++){
        if(s[i] >= 48 && s[i] <= 57)  val.push(to_string(s[i]-48));

        else{
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans= solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;

return 0;
}

//prefix to postfix
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string solve(string val1,string val2 , char ch){
    string s = "";
    s +=val1;
    s +=val2;
    s.push_back(ch);
    return s;
}

int main() {
    string s ="-/*+79483";

    stack<string> val;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i] >= 48 && s[i] <= 57)  val.push(to_string(s[i]-48));

        else{
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans= solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
return 0;
}