class Solution
{
public:
    bool canBeEqual(string s1, string s2)
    {

        bool a = s1[0] == s2[0];
        bool b = s1[2] == s2[2];
        bool c = s1[0] == s2[2];
        bool d = s1[2] == s2[0];

        bool e = s1[1] == s2[1];
        bool f = s1[3] == s2[3];
        bool g = s1[1] == s2[3];
        bool h = s1[3] == s2[1];

        if (((a && b) || (c && d)) && ((e && f) || (g && h)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};