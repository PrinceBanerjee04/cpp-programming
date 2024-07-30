#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int n1 = n, c = 0, d, s = 0;
    while (n1 > 0)
    {
        n1 /= 10;
        c++;
    }
    n1 = n;
    while (n1 > 0)
    {
        d = n1 % 10;
        s = s +(int) pow(d, c);
        c--;
        n1 /= 10;
    }
    if (n == s)
        cout << "DISARIUM NUMBER";
    else
        cout << "NOT A DISARIUM NUMBER";
    return 0;
}
