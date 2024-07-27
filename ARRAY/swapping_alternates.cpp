#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i+=2)
    {
        if(i+1<6)
        swap(arr[i],arr[i+1]);
    }
    
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
