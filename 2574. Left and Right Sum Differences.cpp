class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i] += nums[i - 1];
        }
        int total = nums[n - 1];

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int left = 0, right = 0;

            if (i - 1 >= 0)
            {
                left = nums[i - 1];
            }

            right = total - nums[i];

            ans[i] = abs(right - left);
        }
        return ans;
    }
};