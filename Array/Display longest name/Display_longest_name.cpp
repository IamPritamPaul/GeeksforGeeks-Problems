// User function Template for C++
class Solution
{
public:
    string longest(string names[], int n)
    {
        string s;
        for (int i = 0; i < n; i++)
        {
            if (names[i].length() > s.length())
            {
                s = names[i];
            }
        }
        return s;
    }
};