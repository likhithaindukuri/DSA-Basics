class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int rem = 0, sum = 0;
        int temp = n;
        while (n > 0)
        {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }
        if (sum == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};