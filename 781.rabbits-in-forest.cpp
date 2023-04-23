/*
 * @lc app=leetcode id=781 lang=cpp
 *
 * [781] Rabbits in Forest
 */

// @lc code=start
class Solution
{
public:
    int numRabbits(vector<int> &answers)
    {
        map<int, int> mp;

        for (auto &&i : answers)
        {
            mp[i]++;
        }
        int ans = 0;

        for (auto &&i : mp)
        {
            int x = i.first, n = i.second;
            x++;
            int a = n / x;
            if (n % x)
                a++;
            ans += a * x;
        }

        return ans;
    }
};
// @lc code=end
