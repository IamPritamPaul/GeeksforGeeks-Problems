class Solution
{
public:
    // Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        bool f = false;
        sort(arr, arr + n);
        if (arr[0] > 0)
            return 0;
        for (int i = 0; i < n; i++)
        {
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (arr[i] + arr[l] + arr[r] == 0)
                {
                    f = true;
                    // l++;r--;
                    break;
                }
                else if (arr[i] + arr[l] + arr[r] > 0)
                {
                    r--;
                }
                else
                    l++;
            }
            if (f)
                break;
        }
        if (f)
            return true;
        else
            return false;
    }
};