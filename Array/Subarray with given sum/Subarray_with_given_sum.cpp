class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0, r = 0;
        int sum = arr[l];
        while (r < n)
        {
            if (sum == s)
                return {l + 1, r + 1};
            else if (sum < s)
            {
                r++;
                sum += arr[r];
            }
            else
            {
                sum -= arr[l];
                l++;
                if (l > r)
                {
                    r = l;
                    sum = arr[l];
                }
            }
        }
        return {-1};
    }
};