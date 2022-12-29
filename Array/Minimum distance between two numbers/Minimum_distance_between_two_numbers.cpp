class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        int ix = -1, iy = -1;
        int min_diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                ix = i;
            }
            if (a[i] == y)
            {
                iy = i;
            }
            if (ix != -1 && iy != -1)
            {
                min_diff = min(min_diff, abs(ix - iy));
            }
        }
        if (ix == -1 || iy == -1)
            return -1;
        else
            return min_diff;
    }
};