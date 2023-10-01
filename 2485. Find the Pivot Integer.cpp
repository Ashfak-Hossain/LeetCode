class Solution
{
public:
    int pivotInteger(int n)
    {
        int tmp = 0;

        int totalSum = (n * (n + 1)) / 2;

        for (int i = n; i >= 1; i--)
        {
            tmp += i;

            if ((totalSum + i) - (tmp * 2) == 0)
            {
                return i;
            }
        }

        return -1;
    }
};