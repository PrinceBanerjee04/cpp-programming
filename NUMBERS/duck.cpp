#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter a number : ";
    int n,d,c=0;
    cin>>n;
    while(n>0)
    {
        d=n%10;
        if(d==0)
        {
            c=1;
        }
        n/=10;
    }
    if(c==1)
    cout<<"Duck Number";
    else
    cout<<"Not a Duck Number";
    return 0;
}
