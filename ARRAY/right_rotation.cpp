#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, i;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> arr[i];
    }
    cout << "Enter steps to be rotated : ";
    cin >> d;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + d) % n] = arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    // }
    for (i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}
