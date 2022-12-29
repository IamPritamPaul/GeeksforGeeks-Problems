class Solution
{
public:
    long long find_multiplication(int a[], int b[], int n, int m)
    {
        int mx = *max_element(a, a + n);
        int mn = *min_element(b, b + m);
        return mx * mn;
    }
};