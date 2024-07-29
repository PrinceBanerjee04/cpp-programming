#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int n1=n,d,c,s=0;
    while(n1>0)
    {
        d=n1%10;
        s=s+(d*d*d);
        n1/=10;
    }
    if(s==n)
    cout<<"ARMSTRONG NUMBER";
    else
    cout<<"NOT A ARMSTRONG NUMBER";
}
