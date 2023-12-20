class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream br(s);

        string word;

        string ss = "";

        while (br >> word)
            ss = word + " " + ss;

        ss.pop_back();

        return ss;
    }
};