class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxCandy = *max_element(candies.begin(), candies.end());

        vector<bool> result;

        for (auto candy : candies)
            result.push_back(candy + extraCandies >= maxCandy);

        return result;
    }
};