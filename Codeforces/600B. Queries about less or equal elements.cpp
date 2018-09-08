#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5, M = 4e5 + 5, OO = 0x3f3f3f3f;

int n, m, A[N], x;

int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0 ; i < n ; ++i)  scanf("%d", A+i);
  sort(A, A+n);
  while(m--){
    scanf("%d", &x);
    printf("%d\n", upper_bound(A, A+n, x)-A);
  }
  return 0;
}
