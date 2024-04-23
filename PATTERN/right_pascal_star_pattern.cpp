#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter size : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
