// User function template for C++

class Solution
{
public:
    string longestCommonPrefix(string arr[], int n)
    {
        sort(arr, arr + n);
        string ans;
        int p1 = 0, p2 = 0;
        string first = arr[0];
        string last = arr[n - 1];
        while (p1 < first.length() && p2 < last.length())
        {
            if (first[p1] == last[p2++])
            {
                ans.push_back(first[p1++]);
            }
            else
                break;
        }
        if (ans.empty())
            return "-1";
        else
            return ans;
    }
};