#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5, M = 4e5 + 5, OO = 0x3f3f3f3f;
long long n, A[N], B[N], k;

bool ok(int x)
{

    long long powder = k;

    for(int i = 0 ; i < n ; ++i)
    {
        long long neededPowder = A[i]*x - B[i];
        if(neededPowder > 0)
        {
            powder -= neededPowder;
            if(powder < 0) return false;
        }
    }
    return true;
}

long long binarySearch()
{
    long long lo = 0, med, hi = 2000000005;
    while(lo < hi)
    {
        med = (lo+hi+1)>>1;
        if(ok(med)) lo = med;
        else  hi = med-1;
    }
    return lo;
}

int main()
{
    cin >> n >> k;
    for(int i = 0 ; i < n ; ++i) cin >> A[i];
    for(int i = 0 ; i < n ; ++i) cin >> B[i];
    cout << binarySearch();




    return 0;
}