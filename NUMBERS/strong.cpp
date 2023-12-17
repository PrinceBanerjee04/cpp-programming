#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int n1=n,d,f=1,s=0;
    while(n1>0)
    {
        f=1;
        d=n1%10;
        for(int i=1;i<=d;i++)
        {
            f=f*i;
        }
        s=s+f;
        n1/=10;
    }
    if(s==n)
    cout<<"STRONG NUMBER";
    else
    cout<<"NOT A STRONG NUMBER";
}
