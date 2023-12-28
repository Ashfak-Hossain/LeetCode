class Solution
{
public:
    long long countInterestingSubarrays(vector<int> &nums, int modulo, int k)
    {

        int n = nums.size();

        for (int i = 0; i < n; ++i)
            nums[i] = (nums[i] % modulo == k) ? 1 : 0;

        int sum = 0;

        unordered_map<int, int> mp;

        mp[0] = 1;

        long long count = 0;

        int currSum = 0;

        for (auto element : nums)
        {

            currSum += element;

            count += mp[(currSum - k + modulo) % modulo];

            mp[currSum % modulo]++;
        }

        return count;
    }
};