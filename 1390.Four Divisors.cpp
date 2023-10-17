class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int sum = 0;
        for (auto &n : nums)
        {
            int divi = 0;
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    if (divi == 0)
                    {
                        divi = i;
                    }
                    else
                    {
                        divi = 0;
                        break;
                    }
                }
            }
            if (divi > 0 && divi != n / divi)
                sum += 1 + n + divi + n / divi;
        }
        return sum;
    }
};