#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, s = 3, a = 3, n;
    cout << "ENTER N : ";
    cin >> n;
    if (n < 3)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        cout << "TRIANGULAR NUMBERS ARE : " << endl;
        for (i = 3; s <= n; i++)
        {
            cout << s << endl;
            s = s + i;
        }
    }
    return 0;
}
