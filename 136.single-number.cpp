/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n(0);
        for (auto &&i : nums)
        {
            n ^= i;
        }
        return n;
    }
};
// @lc code=end
