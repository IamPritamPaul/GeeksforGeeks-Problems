class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        int count = 0;
        unordered_set<int> s(a, a + n);
        for (int i = 0; i < m; i++)
        {
            if (s.find(b[i]) != s.end())
            {
                count++;
                s.erase(b[i]);
            }
        }
        return count;
    }
};