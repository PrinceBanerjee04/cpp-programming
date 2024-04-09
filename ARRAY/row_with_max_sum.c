int r = 0, max = 0;
for (i = 0; i < n; i++)
{
    r = 0;
    for (j = 0; j < n; j++)
    {
        r = r + a[i][j];
    }
    if (r > max)
    {
        max = r;
    }
    cout << "Row with maximum sum : " << max;
}
