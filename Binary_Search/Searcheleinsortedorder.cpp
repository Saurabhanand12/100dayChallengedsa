// SEARCH IN ROTATED SORTED ARRAY
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         if (n == 0) return -1;  // Handle empty array     
//         // Step 1: Find the pivot
//         int low = 0, high = n - 1;
//         while (low < high) {
//             int mid = low + (high - low) / 2;
//             // If mid is greater than high, it means the pivot is on the right
//             if (nums[mid] > nums[high]) {
//                 low = mid + 1;
//             } else {
//                 high = mid;  // potential pivot can be mid
//             }
//         }
//         int pivot = low;  // pivot is the index of the smallest element
//         // Step 2: Determine which part of the array to search
//         low = 0, high = n - 1;
//         if (target >= nums[pivot] && target <= nums[high]) {
//             low = pivot;
//         } else {
//             high = pivot - 1;
//         }
//         // Step 3: Binary search in the determined part
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] == target) return mid;
//             else if (nums[mid] < target) low = mid + 1;
//             else high = mid - 1;
//         }
//         return -1;  // Target not found
//     }
// };
