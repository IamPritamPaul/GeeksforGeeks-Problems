class Solution
{
public:
    vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int, int>> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < M; i++)
        {
            mp[B[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            int p = X - A[i];
            for (int j = 0; j < mp[p]; j++)
            {
                ans.push_back({A[i], p});
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};