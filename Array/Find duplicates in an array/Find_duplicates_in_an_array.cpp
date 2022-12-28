class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here
        int m = *max_element(arr, arr + n);
        vector<int> hash(m + 1, 0);
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < m + 1; i++)
        {
            if (hash[i] > 1)
                ans.push_back(i);
        }
        if (ans.empty())
            ans.push_back(-1);
        return ans;
    }
};