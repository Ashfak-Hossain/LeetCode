/*
 * @lc app=leetcode id=2348 lang=cpp
 *
 * [2348] Number of Zero-Filled Subarrays
 */

// @lc code=start
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {

        long cnt = 0, x = 0;
        for (int n : nums)
        {
            if (n == 0)
            {
                cnt += ++x;
            }
            else
            {
                x = 0;
            }
        }
        return cnt;
    }
};
// @lc code=end
