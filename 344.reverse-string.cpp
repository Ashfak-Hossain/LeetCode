/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {

        stack<char> a;

        for (int i = 0; i < s.size(); i++)
        {
            // pushing char into stack
            a.push(s[i]);
        }

        // pop every char

        for (int i = 0; i < s.size(); i++)
        {
            s[i] = a.top();
            a.pop();
        }
    }
};
// @lc code=end
