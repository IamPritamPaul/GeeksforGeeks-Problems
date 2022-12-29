class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        int count = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[arr[i]] == 1)
            {
                return arr[i];
            }
        }
        return 0;
    }
};