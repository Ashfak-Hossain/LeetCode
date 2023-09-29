
// Solution 1

// Time Complexity O(n)

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int ans(0);
        vector<int> v;
        for (auto &i : nums)
        {
            ans += i;
            v.push_back(ans);
        }
        return v;
    }
};

// Solution 2

// Time Complexity O(n)

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> sum(size(nums));
        partial_sum(begin(nums), end(nums), begin(sum));
        return sum;
    }
};