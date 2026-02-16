#include<iostream> 
using namespace std;

int main(){
    int val;
    cout<<"Enter the value"<<endl;
    cin>> val;

    bool flag = false;
    int low =0 ;
    int high = val;
    while(low <= high ){
        int mid = low + (high-low)/2;
        if(mid* mid == val){
            flag = true;
            cout<< mid<<endl;
            break;
        }
        else if(mid*mid > val) high = mid -1;
        else low = mid+1;
    }
    if(flag == false) cout<<high<<endl;
    return 0;
}