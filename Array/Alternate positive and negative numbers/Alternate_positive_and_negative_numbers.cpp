// User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        int cn = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                cn++;
        }
        int arr_n[cn];
        int arr_p[n - cn];
        int in = 0, ip = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                arr_n[in++] = arr[i];
            if (arr[i] >= 0)
                arr_p[ip++] = arr[i];
        }
        ip = 0;
        in = 0;
        int i = 0;
        while (ip < n - cn && in < cn)
        {
            arr[i++] = arr_p[ip++];
            arr[i++] = arr_n[in++];
        }
        while (ip < n - cn)
        {
            arr[i++] = arr_p[ip++];
        }
        while (in < cn)
        {
            arr[i++] = arr_n[in++];
        }
    }
};