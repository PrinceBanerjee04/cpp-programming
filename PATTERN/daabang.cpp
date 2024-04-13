#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cout << "Enter size of the pattern :- ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        for (k = 1; k <= (i - 1); k++)
        {
            cout << "* ";
        }
        for (k = (i - 1); k >= 1; k--)
        {
            cout << "* ";
        }
        for (l = (n - i + 1); l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}
