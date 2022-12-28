class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            m[a[i]]++;
        }
        int x = size / 2;
        int result = -1;
        for (auto i : m)
        {
            if (i.second > x)
                result = i.first;
        }
        return result;
    }
};