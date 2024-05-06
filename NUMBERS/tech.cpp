int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int n1 = n, c = 0, f, l, s = 0;
    while (n1 > 0)
    {
        n1 /= 10;
        c++;
    }
    if (c % 2 == 0)
    {
        n1 = n;
        f = n1 % (int)pow(10, c / 2);
        l = n / pow(10, c / 2);
        s = pow((f+l),2);
        if (n == s)
            cout << "TECH NUMBER";
        else
            cout << "NOT A TECH NUMBER";
    }
    else
        cout << "NOT A TECH NUMBER";
    return 0;
}
