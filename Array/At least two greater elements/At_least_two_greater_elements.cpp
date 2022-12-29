class Solution
{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        vector<int> v(a, a + n);
        sort(v.begin(), v.end());
        vector<int>::iterator it;
        it = v.end() - 1;
        v.erase(it);
        it = v.end() - 1;
        v.erase(it);
        return v;
    }
};