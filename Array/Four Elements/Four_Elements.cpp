// User function Template for C++
bool find4Numbers(int arr[], int n, int X)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int k = j + 1, l = n - 1;
            while (k < l)
            {
                if (arr[i] + arr[j] + arr[k] + arr[l] == X)
                    return 1;
                else if (arr[i] + arr[j] + arr[k] + arr[l] < X)
                    k++;
                else
                    l--;
            }
        }
    }
    return 0;
}