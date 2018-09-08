#include <bits/stdc++.h>
using namespace std;
#define CLR(a,b) memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define MAX 100000
int main()
{
	int n;
	__int64 num[MAX+11];
	while (~scanf ("%d",&n))
	{
		for (int i = 1 ; i <= n ; i++)
			scanf ("%I64d",&num[i]);
		sort(num+1 , num+1+n);
		__int64 ans = 0;
		for (int i = 1 ; i <= n ; i++)
		{
			for (int j = 1 ; j <= 31 ; j++)
			{
				__int64 t = ((__int64)1<<j) - num[i];
				ans += upper_bound(num+1+i , num+1+n , t) - lower_bound(num+1+i , num+1+n , t);
			}
		}
		printf ("%I64d\n",ans);
	}
 
    return 0;
}