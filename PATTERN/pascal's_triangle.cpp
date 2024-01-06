#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cout << "Enter size of the pattern : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= (n - i); k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}
