#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    string st="";
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0)
    {
        d=n%2;
        st=to_string(d)+st;
        n/=2;
    }
    cout<<"Binary Equivalent : "<<st;
}
