class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<string> &words)
    {
        vector<int> ans;
        vector<int> num;
        int prevCount = 0;

        for (const auto &word : words)
        {
            if (word == "prev")
            {
                if (prevCount >= num.size())
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(num[num.size() - 1 - prevCount]);
                }
                prevCount++;
            }
            else
            {
                num.push_back(stoi(word));
                prevCount = 0;
            }
        }
        return ans;
    }
};