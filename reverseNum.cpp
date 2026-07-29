class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;
        int rem;
        long long temp = ((long long)x);
        while (temp > 0)
        {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp = temp / 10;
        }
        if (x < 0)
        {
            return -rev;
        }
        return rev;
    }
};