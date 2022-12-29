// User function template for C++
class Solution
{
public:
    int findMaximum(int arr[], int n)
    {
        sort(arr, arr + n);
        return *max_element(arr, arr + n);
    }
};