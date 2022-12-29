class Solution
{

public:
    int findSwapValues(int a[], int n, int b[], int m)
    {
        // Your code goes here
        int sa = 0, sb = 0;
        sa = accumulate(a, a + n, sa);
        sb = accumulate(b, b + m, sb);
        for (int i = 0; i < m; i++)
        {
            b[i] *= 2;
        }
        sort(b, b + m);
        for (int i = 0; i < n; i++)
        {
            if (binary_search(b, b + m, sb - sa + 2 * a[i]))
                return 1;
        }
        return -1;
    }
};