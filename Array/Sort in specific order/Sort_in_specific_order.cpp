class Solution
{
public:
    void sortIt(long long arr[], long long n)
    {
        int l = 0, r = n - 1, k = 0;
        while (l < r)
        {
            while (arr[l] % 2)
            {
                l++;
                k++;
            }
            while (arr[r] % 2 == 0 && l < r)
            {
                r--;
            }
            if (l < r)
                swap(arr[l], arr[r]);
        }
        sort(arr, arr + k, greater<int>());
        sort(arr + k, arr + n);
    }
};