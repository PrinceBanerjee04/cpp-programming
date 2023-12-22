bool isComposite(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c > 2)
        return true;
    else
        return false;
}
int sum(int n)
{
    int s = 0, d;
    while (n > 0)
    {
        d = n % 10;
        s = s + d;
        n /= 10;
    }
    return s;
}
int SPF(int n)
{
    int s = 0, i = 2;
    while (n > 0)
    {
        if (n % i == 0)
        {
            s = s + sum(i);
            n /= i;
        }
        i++;
    }
    return s;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int s1 = sum(n);
    int s2 = SPF(n);
    if (isComposite(n) == true)
    {
        if (s1 == s2)
            cout << n << " is a Smith Number";
    }
    else
        cout << n << " is not a Smith Number";
    return 0;
}
