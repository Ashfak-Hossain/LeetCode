class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;

        while (true)
        {
            if (x != 0)
            {
                rev = (rev * 10) + (x % 10);
                x /= 10;
            }
            else
            {
                break;
            }
        }
        if ((rev > INT_MAX) || (rev < INT_MIN))
            return 0;
        else
            return rev;
    }
};