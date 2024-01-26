int main()
{
    int n;
    cout << "ENTER N : ";
    cin >> n;
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (i * (i + 1) == n)
            c = 1;
    }
    if (c == 1)
        cout << "PRONIC NUMBER";
    else
        cout << "NOT A PRONIC NUMBER";
}
