#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int lb, int ub)
{
    int mid = (lb + ub) / 2;
    int l1 = mid - lb + 1, l2 = ub - mid;
    int a[l1], b[l2], i = 0, j = 0, k = 0, idx = lb;
    for (i = 0; i < l1; i++)
    {
        a[i] = arr[idx++];
    }
    idx = mid + 1;
    for (i = 0; i < l2; i++)
    {
        b[i] = arr[idx++];
    }
    idx = lb;
    while (j < l1 && k < l2)
    {
        if (a[j] < b[k])
            arr[idx++] = a[j++];
        else
            arr[idx++] = b[k++];
    }
    while (j < l1)
        arr[idx++] = a[j++];
    while (k < l2)
        arr[idx++] = b[k++];
}

void mergesort(int arr[], int lb, int ub)
{
    if (lb >= ub)
        return;
    int mid = (lb + ub) / 2;
    mergesort(arr, lb, mid);
    mergesort(arr, mid + 1, ub);
    merge(arr, lb, ub);
}

int main()
{
    int n, i;
    cout << "Enter array size : ";
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
    mergesort(arr, 0, n - 1);
    cout << "SORTED ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
