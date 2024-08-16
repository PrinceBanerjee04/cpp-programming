#include <bits/stdc++.h>
using namespace std;
int main()
{
    // INTEGER ARRAY
    int arr[4] = {23, 122, 41, 67};

    cout << "address of a memory block is " << arr << endl;
    cout << "address of a memory block is " << &arr << endl;
    cout << "address of a memory block is " << &arr[0] << endl;
    
    cout << "\n";

    cout << "1st element " << arr[0] << endl;
    cout << "1st element " << *arr << endl;
    cout << "2nd Element " << *(arr + 1) << endl;
    cout << "\n";

    cout << "Adds 1 to the 1st element " << *arr + 1 << endl;
    cout << "Adds 1 to the 1st element" << *(arr) + 1 << endl;
    cout << "\n";

    cout << "3rd element " << arr[2] << endl;
    cout << "3rd element " << *(arr + 2) << endl;
    cout << "\n";

    int *p = &arr[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "adress of pointer-p " << &p << endl;
    cout << "\n";

    // CHARACTER ARRAY
    char ch[6] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;
}
