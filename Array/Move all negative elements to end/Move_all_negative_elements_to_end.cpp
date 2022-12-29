class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        int j = 0;
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                temp[j++] = arr[i];
        }
        if (j == 0 || j == n)
            return;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                temp[j++] = arr[i];
        }
        memcpy(arr, temp, sizeof(temp));
    }
};