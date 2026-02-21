#include<iostream>
#include<vector> 
#include<climits>
using namespace std;

bool check(int mid, vector<int>& arr, int p){
    int painter =1,time =0;
    for(int i=0;i<arr.size();i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    if(painter > p ) return false;
    return true;
}
int PainterPartition(vector<int>& arr, int n , int p){
    int ans =-1;
    int sum =0 , maxval = INT_MIN;

    for(int i =0;i<n;i++){
        sum += arr[i];
        if(arr[i] > maxval) maxval = arr[i];
    }
    int low = maxval ;
    int high = sum;

    while(low <= high){
        int mid = low + (high - low )/2;
        if(check(mid,arr, p) == true){
            ans = mid;
            high = mid - 1;
        }
        else  low = mid + 1;
    }
    return ans;
}

int main() {

    vector<int> arr = {40,30,10,20};
    int n = arr.size();

    int p =2;

    cout<<PainterPartition(arr,n,p);

return 0;
}