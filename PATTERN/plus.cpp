int main()
{
    int i,j,k,n;
    cout<<"Enter size : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2)
            cout<<"*";
            else if(j==n/2)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
