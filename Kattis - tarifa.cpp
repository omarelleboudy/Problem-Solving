#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,p,ans;
    cin >> x;
    ans = x;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> p;
        ans+= (x-p);
    }
    cout << ans<<endl;
    return 0;
}
