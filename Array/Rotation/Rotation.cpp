// User function template for C++
class Solution
{
public:
    int findKRotation(int arr[], int n)
    {
        int k = 0;
        int mn = *min_element(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mn)
            {
                return i;
            }
        }
    }
};