int main()
{
    int i, j, k, n;
    cout << "Enter size : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (k = 0; k < (2 * i + 1); k++)
        {
            if (i == 0 || i == n - 1 || k == 0 || k == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
