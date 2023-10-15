class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int j = 0;
        int n = nums.size() - 1;
        for (int i = 0; i <= n; i++)
        {
            if (nums[i] == 0)
                swap(nums[i], nums[j++]);
            else if (nums[i] == 2)
                swap(nums[i--], nums[n--]);
        }
    }
};