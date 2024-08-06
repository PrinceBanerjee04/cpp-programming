#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << n << " IS A FIZZBUZZ NUMBER " << endl;
    }
    else if (n % 3 == 0)
    {
        cout << n <<" IS A FIZZ NUMBER" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << n << " IS A BUZZ NUMBER" << endl;
    }
    else if (n % 3 != 0 || n % 5 != 0)
    {
        cout << n << " IS NOT A FIZZ BUZZ NUMBER" << endl;
    }
}
