class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {

        int ts = travel.size();

        vector<int> travelPrefixSum(ts + 1, 0);

        for (int i = 1; i <= ts; i++)
        {
            travelPrefixSum[i] = travel[i - 1] + travelPrefixSum[i - 1];
        }

        unordered_map<char, int> garbageLastIndex;

        unordered_map<char, int> garbageCount;

        for (int i = 0; i < garbage.size(); i++)
        {
            for (char c : garbage[i])
            {
                garbageLastIndex[c] = i;
                garbageCount[c]++;
            }
        }

        char gbType[3] = {'M', 'P', 'G'};
        int ans = 0;

        for (char c : gbType)
        {
            if (garbageCount[c])
            {
                ans += travelPrefixSum[garbageLastIndex[c]] + garbageCount[c];
            }
        }
        return ans;
    }
};