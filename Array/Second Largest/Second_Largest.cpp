class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        set<int, greater<int>> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        if (*s.begin() == *s.rbegin())
            return -1;
        s.erase(s.begin());
        return *s.begin();
    }
};