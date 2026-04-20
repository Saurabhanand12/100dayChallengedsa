//////largest Sum After K Negations

// class Solution {
// public:
//     int largestSumAfterKNegations(vector<int>& nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> pq;

//         for (int ele : nums) {
//             pq.push(ele);
//         }

//         while (k--) {
//             int node = pq.top();
//             pq.pop();

//             pq.push(-node);  // flip sign
//         }

//         int ans = 0;
//         while (!pq.empty()) {
//             ans += pq.top();
//             pq.pop();
//         }

//         return ans;
//     }
// };

////////Fractional knapsack
// #include<bits/stdc++.h>
// using namespace std;

// bool cmp(pair<int,int> p1,pair<int,int> p2){
//     // pair<int,int> pq = first => value , second => wieght
//     double r1 = (p1.first*1.0)/(p1.second*1.0);
//     double r2 = (p2.first*1.0)/(p2.second*1.0);
//     return r1 > r2;
// }

// double fractionalknapsack(vector<int>& profit,vector<int>& weights,int n , int W){
//     vector<pair<int,int>> arr;
//     for(int i =0;i<n;i++){
//         arr.push_back({profit[i],weights[i]});
//     }                                                          //TC = O(n log n)
//     sort(arr.begin(),arr.end(),cmp);
//     double result =0;
//     for(int i=0;i<n;i++){
//         if(arr[i].second <= W){
//             result += arr[i].first;
//             W -= arr[i].second;
//         }
//         else{
//             result += ((arr[i].first*1.0)/(arr[i].second*1.0)) * W;
//             W = 0;
//             break;
//         }
//     }
//     return result; 
// }

// int main(){
//     vector<int> profit = {60,100,120};
//     vector<int> weight = {10,20,30};
//     int w =50;
//     int n = 3;
//     cout<<fractionalknapsack(profit,weight,n,w)<<endl;
//     return 0;
// }

////// Maximum Units on a Truck ////1710
// bool cmp(vector<int> &a,vector<int>& b){
//     return a[1] > b[1];
// }
// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//         sort(boxTypes.begin(),boxTypes.end(),cmp);
//         int profit =0;
//         for(int i=0;i<boxTypes.size();i++){
//             if(boxTypes[i][0] <= truckSize){
//                 profit +=boxTypes[i][0] *boxTypes[i][1];
//                 truckSize -= boxTypes[i][0];
//             }
//             else{
//                 profit += truckSize*boxTypes[i][1];
//                 truckSize =0;
//             }
//             if(truckSize == 0) break;
//         }
//         return profit;
//     }
// };