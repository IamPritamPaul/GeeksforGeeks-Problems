class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum == total - sum - a[i])
                return (i + 1);
            else
            {
                sum += a[i];
            }
        }
        return -1;
    }
};