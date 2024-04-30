#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int d,s=0;
    while (n > 9)
    {
        while (n > 0)
        {
            d = n % 10;
            s = s + d;
            n /= 10;
        }
        n = s;
        s = 0;
    }
    if (n == 1)
        cout << "MAGIC NUMBER";
    else
        cout << "NOT A MAGIC NUMBER";
    return 0;
}
