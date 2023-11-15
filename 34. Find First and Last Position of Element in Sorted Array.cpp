class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans = {-1, -1};

        int left = Left(nums, target);
        if (left == -1)
            return ans;

        int right = Right(nums, target);
        ans[0] = left;
        ans[1] = right;

        return ans;
    }

    int Left(vector<int> &nums, int t)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        int l = -1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == t)
            {
                l = mid;
                hi = mid - 1;
            }
            else if (nums[mid] < t)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return l;
    }

    int Right(vector<int> &nums, int t)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        int r = -1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == t)
            {
                r = mid;
                lo = mid + 1;
            }
            else if (nums[mid] < t)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return r;
    }
};