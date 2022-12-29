// User function template for C++
class Solution
{
public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int *arr, int n, int k)
    {
        // code here
        map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            ans[arr[i]]++;
        }
        int m = 0;
        for (auto i : ans)
        {
            m = max(m, i.second);
        }
        for (auto i : ans)
        {
            if (m == i.second)
                return i.first;
        }
    }
};