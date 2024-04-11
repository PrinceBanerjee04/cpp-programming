#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,p=1,d;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n/=10;
    }
    if(s==p)
    cout<<"SPY NUMBER";
    else
    cout<<"NOT A SPY NUMBER";
}
