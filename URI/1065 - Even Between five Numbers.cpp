#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,x = 0;
    for ( int i = 0; i < 5;i++)
    {
        cin >> n;
        if (n%2 == 0)
        {
            x++;
            ;

        }
    }
    cout << x << " valores pares"<<endl;



    return 0;
}