// // //// MINIMUM PRODUCT SUBSET
// #include<bits/stdc++.h>
// using namespace std;

// int Minimumprodsubset(vector<int>& arr){
//     int cn =0,cp =0, cz =0;
//     int prodnegative = 1 ,prodpositive = 1;
//     int largestnegative = INT_MIN;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i] < 0){
//             cn++;
//             prodnegative *= arr[i];
//             largestnegative = max(largestnegative,arr[i]);
//         }
//         if(arr[i] == 0) cz++;
//         if(arr[i] > 0){
//             cp++;
//             prodpositive *= arr[i];
//         }
//     }
//     if(cn == 0){
//         if(cz > 0) return 0;
//         else{
//             auto minele = min_element(arr.begin(),arr.end());
//             return *minele;
//         }
//     }
//     else{
//         if(cn % 2 == 0){   // even
//             return (prodnegative / largestnegative) *prodpositive;
//         }
//         else{   // odd
//             return prodnegative * prodpositive;
//         }
//     }
// }

// int main(){

//     vector<int> arr{-2,-3,1,4,-2,-5};
//     cout << Minimumprodsubset(arr) << endl;
    
//     return 0;
// }

////// Boats to save People 881
// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         sort(people.begin(),people.end());
//         int i=0,j=people.size()-1;
//         int count= 0;
//         while( i <= j){
//             if(people[i] + people[j]  <= limit){
//                 count++;
//                 i++;
//                 j--;
//             }
//             else{
//                 count++;
//                 j--;
//             }
//         }
//         return count;
//     }
// };
//

///////////////////////////////////
//Minimum Cost to cut a board into squares
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(int x,int y){
    return x > y;
}

ll mincosttobreakgrid(int n,int m,vector<ll> &ver,vector<ll> &hor){
    sort(ver.begin(),ver.end(),cmp);
    sort(hor.begin(),hor.end(),cmp);
    int hz =1,vr=1;
    int h =0,v = 0;
    int ans =0;
    while(h < hor.size() and v < ver.size()){
        if(ver[v] > hor[h]){
            ans += ver[v]*vr;
            hz++;

            v++;
        }
        else{
            ans += hor[h]*hz;
            vr++;

            h++;
        }
    }
    while(h < hor.size()){
        ans += hor[h]*hz;
        vr++;

        h++;
    }
    while(v < ver.size()){
        ans += ver[v]*vr;
        hz++;

        v++;
    }
    return ans;
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<ll> vertical,horizontal;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<mincosttobreakgrid(n,m,horizontal,vertical)<<endl;
    return 0;
}