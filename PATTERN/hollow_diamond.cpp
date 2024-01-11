int main()
{
    int i, j, n, k;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << " ";
        }
        for (k = 0; k < (i * 2 - 1); k++)
        {
            if (k == 0 || k == (2 * i - 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (k = (n - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (n - i) * 2 - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
