/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution{
public:
    int removeDuplicates (vector<int> &nums)
    {
        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            if ((it+1 != nums.end()) && ((*it) == (*(it+1))))
            {
                nums.erase(it + 1);
            }
            else
            {
                it ++;
            }
        }
        return nums.size();
    }
};
// @lc code=end

