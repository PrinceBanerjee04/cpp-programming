int main()
{
    int n, i, j;
    cout << "ENTER N :";
    cin >> n;
    for (i = n / 2; i < n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            cout << " ";
        }
        for (j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        for (j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        for (j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
