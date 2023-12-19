#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,n,k;
    cout<<"Enter the number of rows: ";
    cin>>n;
    k=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=k; j++)
        {
            cout<<" ";
        }
        k--;
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    k = 1;
    for(i=1; i<=(n-1); i++)
    {
        for(j=1; j<=k; j++)
        {
            cout<<" ";
        }
        k++;
        for(j=1; j<=(2*(n-i)-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
