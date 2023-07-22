/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {

        int m = word1.size();
        int n = word2.size();

        string r = "";

        int i(0), j(0);

        while (i < m || j < n)
        {
            if (i < m)
            {
                r.push_back(word1[i++]);
            }
            if (j < n)
            {
                r.push_back(word2[j++]);
            }
        }

        return r;
    }
};
// @lc code=end
