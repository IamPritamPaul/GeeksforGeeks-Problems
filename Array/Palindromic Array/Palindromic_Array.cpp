/*Complete the function below*/

class Solution
{
public:
    int check_palindrome(int n)
    {
        int x = n, r_n = 0;
        while (n)
        {
            int d = n % 10;
            r_n = r_n * 10 + d;
            n /= 10;
        }
        if (x == r_n)
            return 1;
        else
            return 0;
    }
    int PalinArray(int a[], int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            if (check_palindrome(a[i]) == 1)
                continue;
            else
                return 0;
        }
        return 1;
    }
};