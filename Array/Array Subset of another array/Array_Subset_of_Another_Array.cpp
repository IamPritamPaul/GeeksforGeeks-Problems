string isSubset(int a1[], int a2[], int n, int m)
{
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        mp1[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[a2[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp1[a2[i]] == 0 || mp2[a2[i]] > mp1[a2[i]])
            return "No";
    }
    return "Yes";
}