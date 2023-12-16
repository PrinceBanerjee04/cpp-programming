int main()
{
    int a, b;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter b number : ";
    cin >> b;
    if (a == 0)
        cout << "GCD = " << b;
    if (b == 0)
        cout << "GCD = " << a;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << "GCD = " << b << endl;
}
