class Solution
{
public:
    vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
    {
        vector<int> result(n);

        for (auto &v : bookings)
        {
            result[v[0] - 1] += v[2];
            if (v[1] < n)
                result[v[1]] -= v[2];
        }

        for (int i = 1; i < n; ++i)
            result[i] += result[i - 1];

        return result;
    }
};