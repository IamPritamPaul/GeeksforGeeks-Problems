// User function template for C++

class Solution
{
public:
    void leftRotate(int arr[], int n, int r)
    {
        // code here
        if (!r)
            return;
        r = r % n;
        reverse_array(arr, 0, r - 1);
        reverse_array(arr, r, n - 1);
        reverse_array(arr, 0, n - 1);
    }
    void reverse_array(int a[], int start, int end)
    {
        while (start < end)
        {
            swap(a[start], a[end]);
            start++;
            end--;
        }
    }
};