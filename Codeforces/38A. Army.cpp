#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,a,b,x = 0;
    long long A[101];
    cin >> n;

    for (int i = 0; i < n-1;i++)
    {
        cin >> A[i];

    }
    cin >> a >> b;

    for (int i = a-1; i < b-1; i++)
    {

        x += A[i];


    }
    cout << x;
    return 0;
}