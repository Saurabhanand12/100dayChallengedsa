#include<iostream>
#include<vector>
using namespace std;

bool check(int mid, vector<int>& arr, int p){
    int student =1,page = 0;
    for(int i =0 ;i< arr.size();i++){
        if(arr[i] > mid) return false;
        if(page + arr[i] <= mid)  page += arr[i];
        else{
            student++;
            page = arr[i];
        }
    }
    if(student > p) return false;
    return true;
}

int BookAllocation(vector<int>& arr, int n , int p){
    int sum =0;
    int ans = -1;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int low =0;
    int high = sum;

    while(low <= high){
        int mid = low + (high - low )/2;
        if(check(mid ,arr,p) == true){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr{2,1,3,4};
    int n = arr.size();

    int p = 2;

    cout<<BookAllocation(arr,n,p);
return 0;
}