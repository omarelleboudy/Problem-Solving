#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char A[1500];
    cin >> A;

    if ( A[0] >= 'A' && A[0]<= 'Z')
        cout <<A;

    else if (A[0] >= 'a' && A[0]<='z')
    {
        A[0]+= 'A'-'a';
        cout << A;
    }
    return 0;
}