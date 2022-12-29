class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int a1[], int a2[], int n, int m)
    {
        vector<int> ans;
        set<int> s1, s2;
        for (int i = 0; i < n; i++)
        {
            s1.insert(a1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s2.insert(a2[i]);
        }
        auto i = s1.begin();
        auto j = s2.begin();
        while (i != s1.end() && j != s2.end())
        {
            if (*i == *j)
            {
                ans.push_back(*i);
                i++;
                j++;
            }
            else if (*i < *j)
            {
                ans.push_back(*i);
                i++;
            }
            else
            {
                ans.push_back(*j);
                j++;
            }
        }
        while (i != s1.end())
        {
            ans.push_back(*i);
            i++;
        }
        while (j != s2.end())
        {
            ans.push_back(*j);
            j++;
        }
        return ans;
    }
};