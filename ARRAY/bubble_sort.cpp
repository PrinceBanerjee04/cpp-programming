#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, min, temp;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> arr[i];
    }
    cout << "GIVEN ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "SOTED ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
