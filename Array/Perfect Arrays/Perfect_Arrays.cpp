// User function Template for C++

class Solution
{
public:
    bool IsPerfect(int a[], int n)
    {
        // Complete the function
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] == a[j])
            {
                i++;
                j--;
            }
            else
                return 0;
        }
        return 1;
    }
};
