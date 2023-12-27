#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size :";
    cin >> n;
    int a[n][n], arr[n][n], i, j, k = 0;
    for (i = 0; i < n; i++)
    {
       
            cout << "Enter element " << k << " : ";
        for (j = 0; j < n; j++)
        {
            k++;
            cin >> a[i][j];
        }
    }
    cout << "ORIGINAL MATRIX" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout<<"TRANSPOSE OF THE MATRIX : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
}
