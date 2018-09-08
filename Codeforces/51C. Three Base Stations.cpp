#include <bits/stdc++.h>
using namespace std;

const int N = 2e6+5;
const double EPS = 1e-10;
int n;
long long x;
int A[N];


bool ok(double t)
{
    int Start2 = upper_bound(A,A+n,A[0]+2*t)-A;
    if (Start2 == n) return 1;
    int Start3 = upper_bound(A,A+n,A[Start2]+2*t)-A;
    if (Start3 == n) return 1;
    int Start4 = upper_bound(A,A+n,A[Start3]+2*t)-A;
    if (Start4 == n) return 1;
    return 0;
}

double binarySearch()
{
    double low = 0, high = 1e9+5,med;
    int c = 100;
    while (c--)
    {
        med = (high+low)/2;
        if (ok(med)) high = med;
        else low = med;

    }
    return med;
}

int main()
{   cout << fixed << setprecision(7);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A, A + n);
    double t = binarySearch();
    cout << t << endl << A[0] + t << " ";
    int Start2 = upper_bound(A, A + n, A[0] + 2 * (t + EPS)) - A;
    int Start3 = upper_bound(A, A + n, A[Start2] + 2 * (t + EPS)) - A;
    cout << A[Start2] + t << " " << A[Start3]+ t << endl;

    return 0;
}