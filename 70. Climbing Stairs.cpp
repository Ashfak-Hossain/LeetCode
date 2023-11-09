class Solution
{

    int solve(int n, vector<int> &dp)
    {
        if (n <= 2)
            return n;

        if (dp[n] != -1)
            return dp[n];
        else
            return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

public:
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};