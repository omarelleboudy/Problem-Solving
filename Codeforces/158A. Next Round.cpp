#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,k,x,c =0;

    int A[50];
    cin >> n >>k;

    for (int i = 0; i <n; i++)
    {
        cin >> A[i];

    }
    for (int i = 0; i <n; i++)
    {
        if (A[i] >0)
        {
            if (A[i] >= A[k-1]) c++;
        }
    }
    cout << c;
    return 0;
}