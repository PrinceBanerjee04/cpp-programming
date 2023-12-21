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
    cout<<"\n";
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "SORTED ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
