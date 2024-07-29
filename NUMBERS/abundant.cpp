#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s>n)
    {
        cout<<"ABUNDANT NUMBER"<<endl;
        cout<<"ABUNDANCE IS: "<<s-n;
    }
    else
    cout<<"NOT A ABUNDANT NUMBER";
    return 0;
}
