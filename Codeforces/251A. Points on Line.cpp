#include <bits/stdc++.h>
using namespace std;

int main()
{   int n;
    long long c=0;
    long long k,a[100100];
    cin >> n >> k;

    for (int i = 0; i < n;i++) cin >> a[i];

    for(int i = 1; i < n; i++)
    {
        long long x = i - (lower_bound(a, a + i, a[i] - k) - a) - 1;

        c += x * (x + 1) / 2;
    }


    cout << c<<endl;



    return 0;
}