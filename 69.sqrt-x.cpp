class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
        {
            return x;
        }

        int left(0), right(x);

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if ((long)mid * mid == x)
            {
                return mid;
            }
            else if ((long)mid * mid < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return round(right);
    }
};