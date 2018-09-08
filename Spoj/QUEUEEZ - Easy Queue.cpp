#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5, M = 4e5 + 5, OO = 0x3f3f3f3f;

int t, n, x;
queue<int> q;

int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    if(n == 1){
      scanf("%d", &x);
      q.push(x);
    }else if(n == 2){
      if(!q.empty())
        q.pop();
    }else{
      if(q.empty()) printf("Empty!\n");
      else  printf("%d\n", q.front());
    }
  }
  return 0;
}
