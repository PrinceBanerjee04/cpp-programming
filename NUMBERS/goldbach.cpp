int main()
{
    int n, i, j, k = 0, f;
    int a[50];
    cout << "ENTER A EVEN NUMBER : ";
    cin >> n;
    if (n % 2 != 0)
        cout << "INVALID INPUT, Number is ODD";
    else if (n <= 9 || n >= 50)
        cout << "INVAID INPUT, Out of Range";
    else
    {
        for (i = 2; i <= n; i++)
        {
            f = 1;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    f = 0;
            }
            if (f == 1)
            {
                a[k++] = i;
            }
        }
        cout << "PRIME PAIRS ARE : "<<endl;
        for (i = 0; i < k; i++)
        {
            for (j = i; j < k; j++)
            {
                if (a[i] + a[j] == n)
                    cout << a[i] << "\t" << a[j]<<endl;
            }
        }
    }
}
