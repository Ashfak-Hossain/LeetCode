class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] ^ nums[i - 1];
        }

        vector<int> ans;
        int k = pow(2, maximumBit) - 1;
        for (int i = prefixSum.size() - 1; i > 0; i--)
        {
            ans.push_back(k ^ prefixSum[i]);
        }

        return ans;
    }
};