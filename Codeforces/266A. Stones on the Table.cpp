#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x =0;
    char A[60];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i =0; i <n-1; i++)
    {
        if (A[i] == A[i+1]) x++;
    }
    cout << x << endl;

    return 0;
}