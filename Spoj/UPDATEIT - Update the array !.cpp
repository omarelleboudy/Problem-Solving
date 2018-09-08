#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{   long long t,n,u,l,r,val,Q,q;
    long long A[100100] ={};
    scanf("%lld",&t);
    while(t--)
    {
        for(long long i=0; i<n; i++) A[i]=0;
 
        scanf("%lld%lld",&n,&u);
        while (u--)
        {
            scanf("%lld%lld%lld",&l,&r,&val);
         A[l] += val;
         A[r+1] -= val;
        }
        for(long long i=1; i<n; i++)
        {
            A[i] += A[i-1];
        }
 
        scanf("%lld",&Q);
        while (Q--)
        {
            scanf("%lld",&q);
            printf("%lld\n",A[q]);
        }
 
    }
 
    return 0;
} 