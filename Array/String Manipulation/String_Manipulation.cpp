// User function Template for C++

class Solution
{
public:
    int removeConsecutiveSame(vector<string> v)
    {
        // int n=v.size();
        // for(int i=0;i<n-1;){
        //     if(v[i].compare(v[i+1])==0){
        //         v.erase(v.begin()+i);
        //         v.erase(v.begin()+i);
        //         if(i>0) i--;
        //         n-=2;
        //     }
        //     else i++;
        // }
        // int s=v.size();
        // return s;

        // now using stack
        stack<string> s;
        for (int i = 0; i < v.size(); i++)
        {
            if (s.empty())
            {
                s.push(v[i]);
            }
            else
            {
                if (s.top().compare(v[i]) == 0)
                {
                    s.pop();
                }
                else
                {
                    s.push(v[i]);
                }
            }
        }
        return s.size();
    }
};