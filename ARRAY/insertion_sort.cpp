#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, min, temp;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    arr[0] = -999;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> arr[i];
    }
    cout << "GIVEN ARRAY : ";
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = 1; i <= n; i++)
    {
        temp = arr[i];
        min = i - 1;
        while (arr[min] > temp)
        {
            arr[min + 1] = arr[min];
            min--;
        }
        arr[min + 1] = temp;
    }
    cout << "SORTED ARRAY : ";
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
