class Solution
{
public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here
        int *count_a = &ca, *count_b = &cb;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > b[i])
                (*count_a)++;
            else if (a[i] < b[i])
                (*count_b)++;
            else
                continue;
        }
    }
};