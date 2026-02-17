///// Find Minimum in Rotated Sorted Array I

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;
//         while(low < high){
//             int mid = low + (high - low) /2;
//             if( nums[mid] > nums[high])   low = mid +1;
//             else high = mid;
//         }
//         return nums[low];
//     }
// };

/////////////////////////////////////////////////

//154. Find Minimum in Rotated Sorted Array II
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int low = 0;
//         int high = nums.size() - 1;

//         while(low < high){
//             int mid = low + (high - low)/2;

//             if(nums[mid] > nums[high]){
//                 low = mid + 1;
//             }
//             else if(nums[mid] < nums[high]){
//                 high = mid;
//             }
//             else{
//                 high--;   // duplicate case
//             }
//         }
//         return nums[low];
//     }
// };
