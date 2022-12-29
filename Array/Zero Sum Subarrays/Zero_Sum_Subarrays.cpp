// User function template for C++

class Solution
{
public:
    // Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n)
    {
        unordered_map<int, vector<int>> map;
        vector<pair<int, int>> out;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
                out.push_back(make_pair(0, i));
            if (map.find(sum) != map.end())
            {
                vector<int> vc = map[sum];
                for (auto it = vc.begin(); it != vc.end(); it++)
                    out.push_back(make_pair(*it + 1, i));
            }
            map[sum].push_back(i);
        }
        return out.size();
    }
};