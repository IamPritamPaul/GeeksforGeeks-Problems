// User function Template for C++
/*
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int a[], int n, long long int mod)
{

    long long int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul = mul % mod;
        a[i] = a[i] % mod;
        mul = (mul * a[i]) % mod;
    }
    return mul;
}