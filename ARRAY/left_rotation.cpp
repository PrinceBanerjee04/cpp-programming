#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, i, k = 0;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> arr[i];
    }
    cout << "Enter steps to be rotated : ";
    cin >> d;
    for (i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
