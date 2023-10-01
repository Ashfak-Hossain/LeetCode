class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int n = gain.size();

        vector<long long> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = gain[i - 1] + prefixSum[i - 1];
        }

        int ans = *max_element(prefixSum.begin(), prefixSum.end());

        return ans;
    }
};