class Solution
{
public:
    vector<int> findIndex(int a[], int n, int key)
    {
        // code here.
        vector<int> index;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == key)
            {
                index.push_back(i);
            }
        }
        if (index.empty())
        {
            index.push_back(-1);
            index.push_back(-1);
        }
        vector<int> final;
        final.push_back(*index.begin());
        final.push_back(*(index.end() - 1));
        return final;
    }
};