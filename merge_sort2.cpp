#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l1, int u1, int l2, int u2)
{
    int p, q, j, n;
    int d[100];
    p = l1;
    q = l2;
    n = 0;
    while (p <= u1 && q <= u2)
    {
        if (a[p] < a[q])
            d[n++] = a[p++];
        else
            d[n++] = a[q++];
    }
    while (p <= u1)
    {
        d[n++] = a[p++];
    }
    while (q <= u2)
    {
        d[n++] = a[q++];
    }
    for (q = l1, n = 0; q <= u2; q++, n++)
    {
        a[q] = d[n];
    }
}

void mergesort(int a[], int lower, int upper)
{
    int mid;
    if (upper > lower)
    {
        mid = (upper + lower) / 2; 
        mergesort(a, lower, mid);
        mergesort(a, mid + 1, upper);
        merge(a, lower, mid, mid + 1, upper);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout<< "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
