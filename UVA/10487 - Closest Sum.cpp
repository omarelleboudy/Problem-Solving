#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

int tc;
int n, m, A[1009], x;

int main(){
	while(scanf("%d", &n), n){
		printf("Case %d:\n", ++tc);
		for(int i = 0 ; i < n ; ++i)
			scanf("%d", A+i);
		scanf("%d", &m);
		for(int q = 0 ; q < m ; ++q){
			scanf("%d", &x);
			int mn = 1000000000, ans;
			for(int i = 0 ; i < n ; ++i){
				for(int j = i+1 ; j < n ; ++j){
					int sum = A[i] + A[j];
					if(abs(sum-x) < mn){
						mn = abs(sum-x);
						ans = sum;
					}
				}
			}
			printf("Closest sum to %d is %d.\n", x, ans);
		}
	}
	return 0;
}












