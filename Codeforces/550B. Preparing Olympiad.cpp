#include <bits/stdc++.h>

using namespace std;


int main()
{

    int A[20];
    int n;
    long long l,r,x;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++) cin >> A[i];

    int ans = 0;

    for (int msk = 0; msk <(1<<n); ++msk)
    {
        int mn = 1e9, mx = -1, c = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(msk & (1<<i))
            {
                c++;
                sum +=A[i];
                mn = min(mn,A[i]);
                mx = max(mx,A[i]);
            }
        }

        if(mx-mn>=x && sum >=l && sum <=r && c >=2) ans++;



    }
    cout << ans<<endl;

    return 0;

}