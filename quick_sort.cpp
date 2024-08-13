#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int lb, int ub)
{
    int pv = arr[lb], c = 0;
    for (int i = lb + 1; i <= ub; i++)
    {
        if (arr[i] <= pv)
            c++;
    }
    int idx = lb + c;
    swap(arr[idx], arr[lb]);
    int i = lb, j = ub;
    while (i < idx && j > idx)
    {
        while (arr[i] <= pv)
            i++;
        while (arr[j] > pv)
            j--;
        if (i < idx && j > idx)
            swap(arr[i++], arr[j--]);
    }
    return idx;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb >= ub)
        return;
    
    int mid = partition(arr, lb, ub);
    quicksort(arr, lb, mid - 1);
    quicksort(arr, mid + 1, ub);
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
    quicksort(arr, 0, n - 1);
    cout << "sORTED ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
