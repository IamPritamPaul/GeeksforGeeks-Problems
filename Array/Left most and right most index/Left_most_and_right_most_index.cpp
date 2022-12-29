class Solution
{
public:
    int first_occurance(vector<long long> &a, int n, int k)
    {
        int s = 0, e = n - 1, m = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
            if (a[m] == k)
            {
                ans = m;
                e = m - 1;
            }
            else if (a[m] < k)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return ans;
    }
    int last_occurance(vector<long long> &a, int n, int k)
    {
        int s = 0, e = n - 1, m = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
            if (a[m] == k)
            {
                ans = m;
                s = m + 1;
            }
            else if (a[m] < k)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return ans;
    }
    pair<long, long> indexes(vector<long long> v, long long x)
    {
        pair<long, long> ans;
        int n = v.size();
        ans.first = first_occurance(v, n, x);
        ans.second = last_occurance(v, n, x);
        return ans;
    }
};