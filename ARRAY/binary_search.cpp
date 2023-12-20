int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " ";
        cin >> arr[i];
    }
    int s;
    cout << "Enter element to be searched : ";
    cin >> s;
    int k = 0, p = 0, lb = 0, ub = n;
    while (lb <= ub)
    {
        p = (lb + ub) / 2;
        if (arr[p] < s)
            lb = p + 1;
        if (arr[p] > s)
            ub = p - 1;
        if (arr[p] == s)
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
        cout << "Number is present";
    else
        cout << "Number is not present";
}
