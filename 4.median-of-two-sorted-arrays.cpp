/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        for (auto i : nums2)
        {
            nums1.push_back(i);
        }

        std::sort(nums1.begin(), nums1.end());

        if ((nums1.size() % 2) != 0)
        {
            auto mid = (nums1.begin() + nums1.size() / 2);
            return *mid;
        }
        else
        {
            auto mid1 = (nums1.begin() + nums1.size() / 2);
            auto mid2 = (nums1.begin() + nums1.size() / 2) - 1;
            return double(*mid2 + *mid1) / 2;
        }
    }
};
// @lc code=end
