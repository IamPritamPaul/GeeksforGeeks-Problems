class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int sum = accumulate(array.begin(), array.end(), 0);
        int total_sum = n * (n + 1) / 2;
        return total_sum - sum;
    }
};