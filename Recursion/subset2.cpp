class Solution {
public:
    void helper(vector<int>& nums,int idx,vector<int> v,set<vector<int>>& st) {
        if(idx == nums.size()){
            st.insert(v);
            return;
        }
        helper(nums, idx + 1, v, st);
        v.push_back(nums[idx]);
        helper(nums, idx + 1, v, st);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 

        set<vector<int>> st;
        vector<int> v;

        helper(nums, 0, v, st);

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
