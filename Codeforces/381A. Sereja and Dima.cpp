#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,turn=0,S=0,D=0;
    int A[100100];
    cin >>n;
    for (int i = 0; i < n; i++) cin >> A[i];


    int i = 0, j = n-1;
    while (i<=j)
    {
        if (A[i] >= A[j])
        {
            if (turn%2==0)
            {
                S += A[i];
            }
            else if (turn%2!=0)
            {
                D+=A[i];
            }
            i++;
        }
        else if (A[i] < A[j])
        {
            if (turn%2==0)
            {
                S += A[j];
            }
            else if (turn%2!=0)
            {
                D+=A[j];
            }
            j--;
        }

        turn++;
    }
    cout << S << " " << D<<endl;
    return 0;
}
