#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cout<<"Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
        cout << "PRIME";
    else
        cout << "NOT PRIME";
    return 0;
}
