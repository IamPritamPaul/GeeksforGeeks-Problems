// User function template for C++
class Solution
{
public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        sort(arr, arr + n);
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] > x)
            {
                r--;
            }
            else if (arr[l] + arr[r] < x)
                l++;
            else
                return true;
        }
        return false;
    }
};