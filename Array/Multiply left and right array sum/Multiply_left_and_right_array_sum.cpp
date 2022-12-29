// User function Template for C++
int multiply(int arr[], int n)
{
    int ls = 0, rs = 0, ans;
    for (int i = 0; i < n / 2; i++)
    {
        ls += arr[i];
    }
    for (int i = n / 2; i < n; i++)
    {
        rs += arr[i];
    }
    ans = ls * rs;
    return ans;
}