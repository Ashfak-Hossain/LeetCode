/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low(0);
        int high = nums.size() - 1;
        int mid(0);

        int g(0);

        while (low <= high)
        {
            mid = (low + high) / 2;
            g = nums[mid];

            if (g == target)
            {
                return mid;
            }
            if (g > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end
