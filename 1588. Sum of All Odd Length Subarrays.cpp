class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int n = size(arr);
        vector<int> prefix_sum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
        }
        int sum(0);
        for (int i = 3; i <= n; i += 2)
        {
            for (int j = i; j <= n; j++)
            {
                sum += prefix_sum[j] - prefix_sum[j - i];
            }
        }
        return (sum + prefix_sum[n]);
    }
};