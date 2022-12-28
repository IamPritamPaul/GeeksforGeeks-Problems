class Solution
{
public:
    int peakElement(int arr[], int n)
    {
        // Your code here,
        int s = 0, e = n - 1;
        int m = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[m] < arr[m + 1])
            {
                s = m + 1;
            }
            else
            {
                e = m;
            }
            m = s + (e - s) / 2;
        }
        return s;
    }
};