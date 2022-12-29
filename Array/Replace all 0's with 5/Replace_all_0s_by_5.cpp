/*you are required to complete this method*/
int convertFive(int n)
{
    vector<int> v;
    int i = 0;
    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
        i++;
    }
    reverse(v.begin(), v.end());
    for (int j = 0; j < i; j++)
    {
        if (v[j] == 0)
            v[j] = 5;
    }
    n = 0;
    for (int j = 0; j < i; j++)
    {
        n = n * 10 + v[j];
    }
    return n;
}