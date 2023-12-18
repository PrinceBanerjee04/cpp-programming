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
    if(n==s)
    cout<<"PERFECT NUMBER";
    else
    cout<<"NOT A PERFECT NUMBER";
    return 0;
}
