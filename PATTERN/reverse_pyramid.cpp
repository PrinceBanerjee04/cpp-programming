#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter size : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
