#include <iostream>
using namespace std;

int rBinSearch(int arr[], int lb, int ub, int item)
{
    int mid;
    if (lb == ub)
    {
        if (arr[lb] == item)
            return lb;
        else
            return -1;
    }
    else
    {
        mid = (lb + ub) / 2;
        if (arr[mid] == item)
            return mid;
        if (arr[mid] > item)
            return rBinSearch(arr, lb, mid - 1, item);
        else
            return rBinSearch(arr, mid + 1, ub, item);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int result = rBinSearch(arr, 0, n - 1, key);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
