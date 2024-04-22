#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, j, k;
    cout << "Enter size : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            cout << " ";
        for (int k = 0; k < (n - i) * 2 - 1; k++)
            cout << "*";
        cout << "\n";
    }
    for (i = 2; i <= n; i++)
    {
        for (j = n; j > i; j--)
            cout << " ";
        for (k = 0; k < i * 2 - 1; k++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}
