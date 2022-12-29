class Solution
{

public:
    vector<int> alternateSort(int arr[], int n)
    {
        vector<int> ans(n);
        int i = 0, j = n - 1, k = 0;
        sort(arr, arr + n);
        while (k < n)
        {
            ans[k++] = arr[j--];
            if (k < n)
                ans[k++] = arr[i++];
        }
        return ans;
    }
};
