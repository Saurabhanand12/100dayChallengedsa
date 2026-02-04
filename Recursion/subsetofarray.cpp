// leetcode 78
#include<iostream>   
#include<vector>
using namespace std;

void subset(int arr[],int n , vector<int> ans,int idx){
    if(idx == n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,n,ans,idx+1);
    ans.push_back(arr[idx]);
    subset(arr,n,ans,idx+1);
}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    subset(arr,n,ans,0);

return 0;
}