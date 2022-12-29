// User function template for C++
class Solution
{
public:
    int maxProduct(int arr[], int n)
    {
        // set<int,greater<int>> s;
        // for(int i=0;i<n;i++) s.insert(arr[i]);
        // int max_product=1;
        // max_product*=*s.begin();
        // s.erase(s.begin());
        // max_product*=*s.begin();
        // return max_product;
        sort(arr, arr + n);
        return arr[n - 1] * arr[n - 2];
    }
};