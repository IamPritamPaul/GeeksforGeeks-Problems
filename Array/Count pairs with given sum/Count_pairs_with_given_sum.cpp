class Solution
{
public:
    int getPairsCount(int arr[], int n, int sum)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int TwiceCount = 0;
        for (int i = 0; i < n; i++)
        {
            TwiceCount += m[sum - arr[i]];
            if (sum - arr[i] == arr[i])
                TwiceCount--;
        }
        return TwiceCount / 2;
    }
};