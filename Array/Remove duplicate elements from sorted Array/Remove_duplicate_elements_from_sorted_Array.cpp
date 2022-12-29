// User function template for C++

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        int temp[n];
        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
                temp[j++] = a[i];
        }
        temp[j++] = a[n - 1];
        for (int i = 0; i < n; i++)
        {
            a[i] = temp[i];
        }
        return j;
    }
};