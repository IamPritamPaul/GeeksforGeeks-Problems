class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        // code here
        unordered_map<int, int> m;
        for (int i = 0; i < N; i++)
        {
            m[arr[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (m.find(i + 1) != m.end())
                arr[i] = m[i + 1];
            else
                arr[i] = 0;
        }
    }
};