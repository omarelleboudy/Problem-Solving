#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,A[100100];

    cin >> n;
    for(long long i=0;i<n;i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for(long long i = 0; i <n-2;i++)
    {

            if (A[i]+A[i+1]>A[i+2] )
            {
                cout << "YES"<<endl;
                return 0;
            }

    }
    cout << "NO"<<endl;
    return 0;
}
