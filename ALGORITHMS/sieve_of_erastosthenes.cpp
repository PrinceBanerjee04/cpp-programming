#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, c = 0;
    cout << "Enter the limit : ";
    cin >> n;
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    for (i = 2; i < n; i++)
    {
        if (prime[i])
        {
            c++;
            for (j = 2 * i; j < n; j += i)
                prime[j] = 0;
        }
    }
    cout << "Number of primes between 1 and " << (n - 1);
    cout << " is :" << c;
}
