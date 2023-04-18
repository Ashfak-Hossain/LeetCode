/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        bool r = (s.compare(t) == 0) ? true : false;

        return r;
    }
};
// @lc code=end
