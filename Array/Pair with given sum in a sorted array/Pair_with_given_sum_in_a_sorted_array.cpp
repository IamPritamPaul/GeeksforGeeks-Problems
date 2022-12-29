
class Solution
{
public:
    int Countpair(int arr[], int n, int sum)
    {
        int l = 0, r = n - 1, count = 0;
        while (l < r)
        {
            if (arr[l] + arr[r] == sum)
            {
                count++;
                l++;
                r--;
            }
            else if (arr[l] + arr[r] > sum)
                r--;
            else
                l++;
        }
        if (count)
            return count;
        else
            return -1;
    }
};