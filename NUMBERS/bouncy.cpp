#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "ENTER N : ";
    cin >> n;
    if (n < 100)
    {
        cout << "<<IVALID INPUT";
    }
    else
    {
        int n1 = n, d, d1, c = 0, c1 = 0;
        d1 = n1 % 10;
        while (n1 > 0)
        {
            d = n1 % 10;
            if (d > d1)
            {
                c = 1;
                break;
            }
            d1 = d;
            n1 /= 10;
        }
        n1 = n;
        d1 = n1 % 10;
        while (n1 > 0)
        {
            d = n1 % 10;
            if (d < d1)
            {
                c1 = 1;
                break;
            }
            d1 = d;
            n1 /= 10;
        }
        if (c == 1 && c1 == 1)
        {
            cout << n << " is a Bouncy Number";
        }
        else
            cout << n << " is not a Bouncy Number";
    }
}
