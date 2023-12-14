int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int n1=n,d,r=0;
    while(n1>0)
    {
        d=n1%10;
        r=r*10+d;
        n1/=10;
    }
    if(r==n)
    cout<<"PALINDROME NUMBER";
    else
    cout<<"NOT A PALINDROME NUMBER";
    return 0;
}
