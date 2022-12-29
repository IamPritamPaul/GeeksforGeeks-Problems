vector<int> minAnd2ndMin(int a[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    if (s.size() == 1)
        return {-1, -1};
    vector<int> ans;
    ans.push_back(*s.begin());
    s.erase(s.begin());
    ans.push_back(*s.begin());
    return ans;
}