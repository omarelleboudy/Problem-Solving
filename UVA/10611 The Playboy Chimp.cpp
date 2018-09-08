#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,q,A[100000];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    cin >>q;
    while(q--)
    {
        int h;
        cin >> h;
        int*a = upper_bound(A,A+n,h);
        int*b = a;
        --b;
        while(b>=A && *b==h) b--;

        if (b>=A) cout << *b << " ";
        else cout << "X ";

        if (a >= A+n) cout << "X\n";
        else cout << *a <<endl;
    }


    return 0;
}