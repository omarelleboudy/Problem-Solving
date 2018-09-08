#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r = 0;
    cin >> n;

    for (int i = 0;i < n; i ++)

    {
        cin >> p >> q;
        if(q-p >=2)
        {
            r++;
        }

    }
    cout << r << endl;







    return 0;
}