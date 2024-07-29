//COMPLEMENT OF BASE 10 INTEGER
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 0)
        return 1;
    int d = 0, n1 = n;
    while (n1 > 0)
    {
        d = (d << 1) | 1;
        n1 = n1 >> 1;
    }
    int r = (~n) & d;
    cout<<r;
}
