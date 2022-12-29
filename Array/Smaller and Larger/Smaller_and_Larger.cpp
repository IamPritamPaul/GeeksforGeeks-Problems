// User function template for C++
class Solution
{
public:
    vector<int> getMoreAndLess(int arr[], int n, int x)
    {
        // code here
        int lcount = 0, mcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < x)
                lcount++;
            else if (arr[i] > x)
                mcount++;
            else
            {
                lcount++;
                mcount++;
            }
        }
        vector<int> result;
        result.push_back(lcount);
        result.push_back(mcount);
        return result;
    }
};