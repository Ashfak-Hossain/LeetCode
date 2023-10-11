class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;

        if (k > 0)
        {
            vector<int> tmp(k);

            for (int i = n - k; i < n; i++)
            {
                tmp[i - (n - k)] = nums[i];
            }

            for (int i = n - k - 1; i >= 0; i--)
            {
                nums[i + k] = nums[i];
            }

            for (int i = 0; i < k; i++)
            {
                nums[i] = tmp[i];
            }
        }
    }
};

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;

        if (k > 0)
        {
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
        }
    }
};