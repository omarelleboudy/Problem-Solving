#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,l,r;
    pair <int,int> P[100100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
 
        for (int i =0; i < n; i++)
        {
            scanf("%d%d",&l,&r);
            P[i] = make_pair(r,l);
 
        }
        sort(P,P+n);
        int x=-1,ans=0;
        for (int i =0; i < n; i++)
        {
            if(P[i].second>=x)
            {
                x = P[i].first;
                ++ans;
            }
        }
        printf("%d\n",ans);
 
    }
 
 
    return 0;
} 