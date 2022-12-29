// User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        return *max_element(arr.begin(), arr.end());
    }
};