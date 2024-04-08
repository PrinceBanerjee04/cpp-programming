#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int n1 = n, d, c = 0;
    while (n1 > 0)
    {
        d = n1 % 10;
        c++;
        n1 /= 10;
    }
    if (c < 4)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        n1 = (n1 * 2 % 1000) / 10;
        if (n1 % 10 == n1 / 10)
            cout << "STRONTIO NUMBER";
        else
            cout << "NOT A STRONTIO NUMBER";
    }
    return 0;
}
