class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int ls = 0, rs = 0;
        for (int i = 0; i < n / 2; i++)
        {
            ls += a[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            rs += a[i];
        }
        return abs(ls - rs);
    }
};
