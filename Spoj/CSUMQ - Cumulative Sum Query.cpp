#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,q,i,j,sum;
    int A[100100] ={};
    int B[100100] ={};

    cin >> n;
    for (int l =0; l < n; l++) cin >> A[l];
    B[0] = A[0];
    for (int l =1; l < n; l++) B[l]=A[l]+B[l-1];

    cin >> q;
    while(q--)
    {
        cin >> i >> j;
        sum = B[j]-B[i-1];
        cout << sum<<endl;
    }




    return 0;
}