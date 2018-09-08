#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

int n, x;
int o, t, th, f, taxi;

int main(){
	scanf("%d", &n);
	for(int i = 0 ; i < n ; ++i){
		scanf("%d", &x);
		if(x == 1)	o++;
		else if(x == 2)	t++;
		else if(x == 3)	th++;
		else	f++;
	}
	taxi = f;
	if(th >= o)	o = 0;
	else	o -= th;
	taxi += th;
	if(t%2 == 0){
		taxi += t/2;
	}else{
		taxi += t/2 + 1;
		if(o>=2)	o -= 2;
		else o = 0;
	}
	taxi += (o+3)/4;
	printf("%d\n", taxi);
	return 0;
}












