#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5, M = 4e5 + 5, OO = 0x3f3f3f3f;
int a,b,c;

bool ok(int x)
{
    return x*b +b*c >= a*c;
}
int binarySearch()
{
    int low = 0, high = 1000000, med;
    while (high > low)
    {
        med = (low+high)>>1;
        if (ok(med)) high = med;
        else low = med+1;
    }
    return low;
}


int main()
{
    cin >> a >> b >> c;
    cout << binarySearch()<<endl;
    return 0;
}