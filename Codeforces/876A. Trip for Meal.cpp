#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int n;
cin>>n;
int a,b,c;
cin>>a>>b>>c;
int y=min(a,min(b,c));
if(y==a||y==b||n==1){
cout<<(n-1)*min(a,b);
}else{
	cout<<min(a,b)+c*(n-2);
}

	return 0;
}