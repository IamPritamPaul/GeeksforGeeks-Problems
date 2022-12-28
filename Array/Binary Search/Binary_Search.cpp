class Solution
{
public:
    int b_search(int arr[], int l, int r, int k)
    {
        if (l > r)
            return -1;
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
            return mid;
        if (arr[mid] > k)
            return b_search(arr, l, mid - 1, k);
        else
            return b_search(arr, mid + 1, r, k);
    }
    int binarysearch(int arr[], int n, int k)
    {
        return b_search(arr, 0, n, k);
    }
};