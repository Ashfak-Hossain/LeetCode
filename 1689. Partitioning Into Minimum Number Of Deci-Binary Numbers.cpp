class Solution
{
public:
    int minPartitions(string n)
    {
        int ans = 0;
        for (auto i : n)
        {
            ans = max(i - '0', ans);
        }
        return ans;
    }
};