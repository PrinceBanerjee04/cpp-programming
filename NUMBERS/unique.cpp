#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout<<"ENETR M : ";
    cin >> m;
    cout<<"ENTER N : ";
    cin >> n;
    if (m < 1 || m > 30000 || n < 1 || n > 30000 || m > n)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        int c = 0, i, d, n1;
        for (i = m; i <= n; i++)
        {
            n1 = i;
            bool a[10]={false};
            bool Unique = true;
            while (n1 > 0)
            {
                d = n1 % 10;
                if (a[d]==true)
                {
                    Unique = false;
                    break;
                }
                a[d] = true;
                n1 /= 10;
            }
            if (Unique==true)
            {
                c++;
                cout<<i<<" ";
            }
        }
        cout << "\n";
        cout << "FREQUENCY OF UNIQUE DIGIT INTERGERS IS : " << c;
    }
}
