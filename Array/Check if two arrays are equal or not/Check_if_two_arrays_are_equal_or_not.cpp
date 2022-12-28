class Solution
{
public:
    // Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n)
    {
        // code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i, j;
        for (i = 0, j = 0; i < n, j < n; i++, j++)
        {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
};