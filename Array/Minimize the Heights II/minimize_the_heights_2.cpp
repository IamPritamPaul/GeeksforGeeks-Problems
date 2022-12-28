class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // int x=(*max_element(arr,arr+n)/2)+1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]<=x) arr[i]+=k;
        //     else arr[i]-=k;
        // }
        // int max=*max_element(arr,arr+n);
        // int min=*min_element(arr,arr+n);
        // return max-min;
        sort(arr, arr + n);
        int min1 = arr[0];
        int max1 = arr[n - 1];
        int ans = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - k < 0)
                continue;
            min1 = min(arr[0] + k, arr[i] - k);
            max1 = max(arr[i - 1] + k, arr[n - 1] - k);
            ans = min(ans, max1 - min1);
        }
        return ans;
    }
};