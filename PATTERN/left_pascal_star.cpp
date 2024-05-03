#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"ENTER N : ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < i; k++)
            cout << "*";
        cout << "\n";
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < n - i; k++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}
