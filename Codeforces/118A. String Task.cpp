#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string A;
    string B;
    cin >> A;


    for (char c : A)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 'a' - 'A';
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            B.append(1, '.');
            B.append(1, c);
        }
    }
    cout << B << endl;



    return 0;
}