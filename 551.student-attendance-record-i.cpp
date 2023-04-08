/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution
{
public:
    bool checkRecord(string s)
    {
        int abs(0), late(0);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                abs++;
                if (abs >= 2)
                    return false;
            }
            if (s[i] == 'L')
            {
                late++;
                if (late >= 3)
                    return false;
            }
            else
            {
                late = 0;
            }
        }
        return true;
    }
};
// @lc code=end
