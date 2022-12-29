// User function template for C++

class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        return m[0];
    }
};