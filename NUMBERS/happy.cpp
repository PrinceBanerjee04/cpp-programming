int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int d, s = 0;
    while (n > 9)
    {
        while (n > 0)
        {
            d = n % 10;
            s = s + (d * d);
            n /= 10;
        }
        n = s;
        s = 0;
    }
    if (n == 1)
        cout << "HAPPY NUMBER";
    else
        cout << "NOT A HAPPY NUMBER";
    return 0;
}
