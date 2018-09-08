#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   cout << fixed << setprecision(1);
    double n,w = 0.0;
    int x = 0;
    for ( int i = 0; i < 6;i++)
    {
        cin >> n;
        if (n > 0)
        {
            x++;
            w +=n;

        }
    }
    cout << x << " valores positivos"<<endl;
    cout << w/x << endl;


    return 0;
}