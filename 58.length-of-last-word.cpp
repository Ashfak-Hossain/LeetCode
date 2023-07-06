/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int count(0);

        int n = s.size();

        int i = 0;

        while (i < n)
        {
            if (s[i] != ' ')
            {
                count++;
                i++;
            }
            else
            {
                while (i < n && s[i] == ' ')
                    i++;

                if (i == n)
                {
                    return count;
                }
                else
                {
                    count = 0;
                }
            }
        }
        return count;
    }
};
// @lc code=end
