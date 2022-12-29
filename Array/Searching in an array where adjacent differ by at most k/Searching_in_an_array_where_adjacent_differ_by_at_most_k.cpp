#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k);

int main()
{
    int t, n, k, x;
    cin >> t;
    while (t--)
    {

        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> x;
        cout << search(arr, n, x, k) << endl;
    }
    return 0;
}

int search(int arr[], int n, int x, int k)
{
    // Complete the function
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
            return i;
    }
    return -1;
}