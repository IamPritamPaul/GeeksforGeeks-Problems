// User function template for C++

class Solution
{
public:
    int getOddOccurrence(int arr[], int n)
    {
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans ^= arr[i];
        }
        return ans;
    }
};