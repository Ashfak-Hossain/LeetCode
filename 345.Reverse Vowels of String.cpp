class Solution
{
public:
    string reverseVowels(string s)
    {
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');

        string vowels = "";

        for (auto &&ch : s)
        {
            if (st.find(ch) != st.end())
                vowels += ch;
        }

        for (int i = 0, j = vowels.size() - 1; i < s.size(); i++)
        {
            if (st.find(s[i]) != st.end())
            {
                s[i] = vowels[j];
                j--;
            }
        }

        return s;
    }
};