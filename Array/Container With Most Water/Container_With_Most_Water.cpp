// User function template for C++

class Solution
{
public:
    int maxDays(int arr[], int n)
    {
        return *max_element(arr, arr + n);
    }
};