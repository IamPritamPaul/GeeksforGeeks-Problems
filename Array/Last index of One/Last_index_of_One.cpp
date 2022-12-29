class Solution
{
public:
    int lastIndex(string s)
    {
        int index = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                index = i;
        }
        return index;
    }
};