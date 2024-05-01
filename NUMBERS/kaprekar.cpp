#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, p, q, n, n1 = 0, n2 = 0, num1, d, d1, p1 = 0, k = 0, w, m = 0, r = 0, c = 0;
    cout << "ENTER P : ";
    cin >> p;
    cout << "ENTER Q : ";
    cin >> q;
    cout << "Kaprekar Numbers between " << p << " and " << q << " are = ";
    for (n = p; n <= q; n++)
    {
        k = 0;
        m = 0;
        r = 0;
        n1 = 0;
        n2 = 0;
        p1 = 0;
        num1 = n * n;
        w = n * n;
        while (w != 0)
        {
            d = w % 10;
            k++;
            w = w / 10;
        }
        if (k % 2 == 0)
            p1 = k / 2;
        else
            p1 = k / 2 + 1;
        for (i = 1; i <= k; i++)
        {
            if (i <= p1)
            {
                d = num1 % 10;
                n1 = n1 + (int)(d * pow(10, m));
                num1 = num1 / 10;
                m++;
            }
            else
            {
                d1 = num1 % 10;
                n2 = n2 + (int)(d1 * pow(10, r));
                num1 = num1 / 10;
                r++;
            }
        }
        if (n1 + n2 == n)
        {
            cout << n << " ";
            c++;
        }
    }
    cout << "\n";
    cout << "TOTAL NUMBER OF KAPREKAR NUMBERS = " << c;
    return 0;
}
