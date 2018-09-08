#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, a, b, c, x,y;
    a = b = c = x = y = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z = 0;
        cin >> z;
        a +=z;
    }
    for (int i = 0; i < n-1; i++)
    {
        int z = 0;
        cin >> z;
        b +=z;
    }
    for (int i = 0; i < n-2; i++)
    {
        int z = 0;
        cin >> z;
        c +=z;
    }
    cout << a - b << endl;
    cout << b - c << endl;





    return 0;
}