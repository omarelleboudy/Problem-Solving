#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if ( a > b && a > c)
    {
        if ( b > c)
        {
                cout << c << endl;
                cout << b << endl;
                cout << a << endl;
                cout << "" << endl;
                cout << a << endl;
                cout << b << endl;
                cout << c << endl;

        }
        else
        {
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
            cout << "" << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    else if ( b > a && b > c)
    {
        if (a > c)
        {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
            cout << "" << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
            cout << "" << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    else if (c > a && c > b )
    {
        if (a > b)
        {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
            cout << "" << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << "" << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }



    return 0;
}