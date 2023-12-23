#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "ENETR M : ";
    cin >> m;
    cout << "ENTER N : ";
    cin >> n;
    if (m < 1 || n < 1 || m > n)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        cout << "The Composite Magic Numbers are : ";
        int i, j, c = 0, s = 0, n1, d;
        for (i = m; i <= n; i++)
        {
            int c1 = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    c1 = 1;
                    break;
                }
            }
            if (c1 == 1 && i != 1)
            {
                n1 = i;
                while (n1 > 9)
                {
                    s = 0;
                    while (n1 > 0)
                    {
                        d = n1 % 10;
                        s = s + d;
                        n1 /= 10;
                    }
                    n1 = s;
                }
                if (n1 == 1)
                {
                    c++;
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
        cout << "FREQUENCY OF COMPOSITE MAGIC NUMBER : " << c;
    }
}
