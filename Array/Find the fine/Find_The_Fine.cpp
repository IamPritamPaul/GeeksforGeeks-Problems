class Solution
{
public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int total;
        if (date % 2)
        {
            total = 0;
            for (int i = 0; i < n; i++)
            {
                if (car[i] % 2 == 0)
                {
                    total += fine[i];
                }
            }
        }
        else
        {
            total = 0;
            for (int i = 0; i < n; i++)
            {
                if (car[i] % 2)
                {
                    total += fine[i];
                }
            }
        }
        return total;
    }
};