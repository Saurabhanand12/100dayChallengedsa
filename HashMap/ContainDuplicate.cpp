///////////////////
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i =0 ;i< nums.size();i++){
//             mp[nums[i]]++;
//             if(mp[nums[i]] == 2) return true; 
//         }
//         return false;
//     }
// };

/////////////////////////////////////////////////
// Contain Duplicate 2 
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;  

//         for(int i = 0; i < nums.size(); i++){
//             if(mp.find(nums[i]) != mp.end()){
//                 if(i - mp[nums[i]] <= k)  return true;
//             }
//             mp[nums[i]] = i;
//         }
//         return false;
//     }
// };