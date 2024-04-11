#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, r = 0, n1, i, c1 = 0, c2 = 0;
    cout << "Enter a number : ";
    cin >> n;
    n1 = n;
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
            c1++;
    }
    while (n > 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    for (i = 1; i <= r; i++)
    {
        if (r % i == 0)
            c2++;
    }
    if (c1 == 2 && c2 == 2)
        cout << "TWISTED PRIME NUMBER";
    else
        cout << "NOT A TWISTED PRIME NUMBER";
    return 0;
}
