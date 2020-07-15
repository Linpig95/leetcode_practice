/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s)
    {
        array<int, 128> T;
        T['I'] = 1;
        T['V'] = 5;
        T['X'] = 10;
        T['L'] = 50;
        T['C'] = 100;
        T['D'] = 500;
        T['M'] = 1000;
        int sum = T[s.back()];
        for (int i = s.length() - 2; i >= 0; --i)
        {
            sum = T[s[i]] < T[s[i + 1]] ? sum - T[s[i]] : sum + T[s[i]];
        }
        return sum;
    }
};
// @lc code=end

