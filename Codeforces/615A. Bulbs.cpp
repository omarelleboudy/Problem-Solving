#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

int n, m, x, num;
bool L[109];

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0 ; i < n ; ++i){
		scanf("%d", &num);
		for(int i = 0 ; i < num ; ++i){
			scanf("%d", &x);
			L[x] = 1;
		}
	}
	for(int i = 1 ; i <= m ; ++i){
		if(L[i] == 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}



