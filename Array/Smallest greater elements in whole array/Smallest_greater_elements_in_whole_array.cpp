int *greaterElement(int arr[], int n)
{
    // Complete the function
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        auto it = s.find(arr[i]);
        it++;
        if (it != s.end())
            arr[i] = *it;
        else
            arr[i] = -10000000;
    }
    return arr;
}