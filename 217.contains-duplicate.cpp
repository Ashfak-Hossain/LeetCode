/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_set<int> seen;

        bool n = false;

        for (auto &&i : nums)
        {
            if (seen.find(i) != seen.end())
            {
                n = true;
            }
            seen.insert(i);
        }

        return n;
    }
};
// @lc code=end
