////////////////1 .
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int maxfreq = INT_MIN;                       //  tc = O(n) = sp
//         int maxEle = 0;
//         for(auto x : mp){
//             int val = x.first;
//             int freq = x.second;
//             if(freq > maxfreq){
//                 maxfreq = freq;
//                 maxEle = val;
//             }
//         }
//         return maxEle;
//     }
// };

//////////////////  Majority Element 2 
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int val = nums.size()/3;
//         unordered_map<int,int> mp;
//         vector<int> ans;

//         for(int i=0;i<nums.size();i++){                //  tc = O(n) = sp
//             mp[nums[i]]++;
//         }
//         int maxfreq = INT_MIN;
//         int maxval = 0;
//         for(auto x : mp){
//             int freq = x.second;
//             int ch = x.first;
//             if(val < freq){
//                 maxfreq = freq;
//                 maxval = ch;
//                 ans.push_back(maxval);
//             }
//         }
//         return ans;
//     }
// };