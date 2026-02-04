#include<iostream>
using namespace std;

void removechar(string ans, string s, int idx){
    if(idx == s.length()){
        cout<<ans<<" ";
        return;
    }
    char ch = s[idx];
    if(ch == 'a') removechar(ans,s,idx+1);
    else removechar(ans+ch,s,idx+1);
}

int main() {
    string s = "sauarbh anand";
    removechar("",s,0);

return 0;
}