class Solution
{
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        int x = n / k;
        int i = 0;
        while (x--)
        {
            reverse(arr.begin() + i, arr.begin() + i + k);
            i += k;
        }
        reverse(arr.begin() + i, arr.end());
    }
};