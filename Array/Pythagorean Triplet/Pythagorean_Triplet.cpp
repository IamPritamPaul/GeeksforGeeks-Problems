// User function template for C++
class Solution
{
public:
    // Function to check if the
    // Pythagorean triplet exists or not
    bool checkTriplet(int arr[], int n)
    {
        // code here
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            arr[i] *= arr[i];
        }
        for (int i = n - 1; i > 2; i--)
        {
            int l = 0, r = i - 1;
            while (l < r)
            {
                if (arr[i] == arr[l] + arr[r])
                    return true;
                else if (arr[i] > arr[l] + arr[r])
                    l++;
                else
                    r--;
            }
        }
        return false;
    }
};