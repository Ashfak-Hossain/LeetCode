/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        int n;

        while (arr[n] < arr[n + 1])
        {
            n++;
        }

        return n;
    }
};
// @lc code=end
