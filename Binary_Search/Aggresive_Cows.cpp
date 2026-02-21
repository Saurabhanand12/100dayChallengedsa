#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
bool check(int mid, vector<int>& arr, int N, int c){
    int cows = 1;
    int laststallpos = arr[0];

    for(int i =0;i<N;i++){
        if(arr[i] - laststallpos >= mid){
            cows++;
            laststallpos = arr[i];
        }
        if(cows == c) return true;
    }
    return false;
}

int getdistance(vector<int>& arr, int N, int c){
    sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[N-1]-arr[0];
    int ans =-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(mid,arr,N,c) == true){
           ans = mid;
           low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

int main() {
    int N = 5, c =3;
    vector<int> arr = {1,2,8,4,9};

    cout<<getdistance(arr,N,c)<<" ";
return 0;
}