#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter a number : ";
    int n,sq,s=0,d;
    cin>>n;
    sq=n*n;
    while(sq>0)
    {
        d=sq%10;
        s=s+d;
        sq/=10;
    }
    if(n==s)
    cout<<"Neon Number";
    else
    cout<<"Not a Neon Number";
    return 0;
}
