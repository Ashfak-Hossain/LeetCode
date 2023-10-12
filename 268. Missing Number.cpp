class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto &i : nums)
            mp[i]++;

        int mx = *max_element(nums.begin(), nums.end());

        for (int i = 0; i < mx; i++)
        {
            if (mp[i] == 0)
            {
                return i;
                break;
            }
        }
        return mx + 1;
    }
};