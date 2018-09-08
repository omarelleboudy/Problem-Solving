#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,c=1;
    int A[100100];
    cin >>n;
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n-1; i++)
    {
        if (A[i] != A[i+1]) c++;
    }
    cout << c << endl;


    return 0;
}

