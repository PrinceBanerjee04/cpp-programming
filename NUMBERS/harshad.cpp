int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int n1=n,d,c,s=0;
    while(n1>0)
    {
        d=n1%10;
        s=s+d;
        n1/=10;
    }
    if(n%s==0)
    cout<<"HARSHAD NUMBER";
    else
    cout<<"NOT A HARSHAD NUMBER";
}
