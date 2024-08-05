#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N : ";
    cin >> n;
    int c = 0, c1 = 0, bn = 0, d;
    while (n > 0)
    {
        d = n % 2;
        if (d == 1)
            c++;
        bn = bn + (int)(d * pow(10, c1));
        c1++;
        n /= 2;
    }
    cout << "BINARY EQUIVALENT : " << bn << endl;
    cout << "No. of 1's : " << c << endl;
    if (c % 2 == 0)
        cout << "EVIL NUMBER";
    else
        cout << "NOT AN EVIL NUMBER";
}
