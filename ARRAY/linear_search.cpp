#include <bits/stdc++.h>
using namespace std;

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
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
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
