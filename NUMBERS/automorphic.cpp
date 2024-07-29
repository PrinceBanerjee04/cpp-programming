#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int n1=n,d,c=0,sq=n*n;
    while(n1>0)
    {
        n1/=10;
        c++;
    }
    sq=n*n;
    d=sq%(int)pow(10,c);
    
    if(d==n)
    cout<<"AUTOMORPHIC NUMBER";
    else
    cout<<"NOT A AUTOMORPHIC NUMBER";
}
