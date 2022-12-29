pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> mm;
    mm.first = *min_element(a, a + n);
    mm.second = *max_element(a, a + n);
    return mm;
}