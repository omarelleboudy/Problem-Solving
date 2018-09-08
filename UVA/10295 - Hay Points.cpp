#include <bits/stdc++.h>

using namespace std;

int main()
{

    map <string,double> map;
    int n,m,k;

    string x;
    cin >> n >> m;
    for (int i =0; i < n; i++)
    {
        cin >> x >> k;
        map[x] = k;
    }
    string y;

    for (int i =0; i<m; i++)
    {
        long long ans = 0;
        while(cin >> y, y != ".") ans += map[y];
        cout << ans << endl;

    }



    return 0;
}