/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution{
    public:
        int searchInsert(vector<int>& nums, int tagert){
            int low= 0;
            int high = nums.size() - 1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(nums[mid] < tagert){
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            return low;
        }
};
// @lc code=end

