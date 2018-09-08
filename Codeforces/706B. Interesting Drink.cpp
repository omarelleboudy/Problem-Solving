#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n,q,x;
    long long A[100100];

    cin >> n ;

    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A,A+n);

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout<<upper_bound(A,A+n,x)-A<<endl;
    }



    return 0;
}

