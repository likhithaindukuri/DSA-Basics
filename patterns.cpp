#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cin >> n;

    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // 1. (N-i-1) spaces on left
    // 2. (2*i+1) stars
    // 3. (N-i-1) spaces on right
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // *********
    //  *******
    //   *****
    //    ***
    //     *
    // 1. Print i spaces on left
    // 2. 2*n-(2*i+1) stars
    // 3. i spaces on right
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = (2 * n - i);
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 1
    // 01
    // 101
    // 0101
    // 10101
    // if row is even row then start with 1, else start with 0
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start; // flips the start value from 1 to 0 or 0 to 1
        }
        cout << endl;
    }

    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A'; c < 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    // A B C D E
    // A B C D
    // A B C
    // A B
    // A
    for (int i = 0; i <= n; i++)
    {
        for (char c = 'A'; c <= 'A' + (n - i - 1); c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
        c += 1;
    }

    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        char c = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << c;
            if (j <= breakpoint)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // E
    // D E
    // C D E
    // B C D E
    // A B C D E
    for (int i = 0; i < n; i++)
    {
        for (char c = 'E' - i; c <= 'E'; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    int iniSpace = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < iniSpace; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniSpace += 2;
        cout << endl;
    }
    iniSpace = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < iniSpace; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniSpace -= 2;
        cout << endl;
    }

    return 0;
}