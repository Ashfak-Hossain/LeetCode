class Solution
{
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string> &words, vector<int> &groups)
    {
        vector<string> result;
        int lastGroup = -1;

        for (int i = 0; i < n; ++i)
        {
            if (lastGroup != groups[i])
            {
                result.push_back(words[i]);
                lastGroup = groups[i];
            }
        }
        return result;
    }
};