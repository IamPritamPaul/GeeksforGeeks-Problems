// User function template for C++
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        // code here
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
                result.push_back(arr[i]);
        }
        return result;
    }
};