class Solution
{

public:
    void leftRotate(int arr[], int k, int n)
    {
        if (k > n)
            k = k % n;
        reverse(arr, arr + k);
        reverse(arr + k, arr + n);
        reverse(arr, arr + n);
    }
};