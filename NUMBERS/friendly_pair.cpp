#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n1,n2,s1=0,s2=0;
   cout<<"Enter first number : ";
   cin>>n1;
   cout<<"Enter second number : ";
   cin>>n2;
   for(int i=1;i<n1;i++)
   {
       if(n1%i==0)
       s1=s1+i;
   }
   for(int i=1;i<n2;i++)
   {
       if(n2%i==0)
       s2=s2+i;
   }
   if((s1/n1)==(s2/n2))
   cout<<"FRIENDLY PAIR";
   else
   cout<<"NOT A FRIENDLY PAIR";
   return 0;
}
