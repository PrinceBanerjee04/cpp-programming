#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> arr[i];
    }
    cout << "GIVEN ARRAY : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    if (ans == 0)
        cout << "No unique element is present";
    else
        cout << "Unique Element is : " << ans;
}
