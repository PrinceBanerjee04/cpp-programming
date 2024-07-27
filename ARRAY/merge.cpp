#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size of array1 : ";
    cin >> n;
    cout << "Enter size of array2 : ";
    cin >> m;
    int a[n], b[m], c[n + m];
    cout << "ENTER ELEMENTS OF ARRAY1" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> a[i];
    }
    
    cout << "ENTER ELEMENTS OF ARRAY2" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i];
            c[k++] = a[i++];
        }
        else
            c[k++] = b[j++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
    cout << "MERGED ARRAY : ";
    for (i = 0; i < (m + n); i++)
        if (c[i] != 0)
            cout << c[i] << " ";
    return 0;
}
