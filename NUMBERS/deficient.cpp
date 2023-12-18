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
    if(s<n)
    {
        cout<<"DEFICIENT NUMBER"<<endl;
        cout<<"DEFICIENCY IS: "<<s-n;
    }
    else
    cout<<"NOT A DEFICIENT NUMBER";
    return 0;
}
