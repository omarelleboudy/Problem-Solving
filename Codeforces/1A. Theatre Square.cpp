#include <bits/stdc++.h>
using namespace std;
long long d1,d2;
int main() 
{
	long long n,m,a;
	
	cin>>n>>m>>a;

	if(n%a==0) d1=n/a;
	else d1= n/a +1;
	
	if(m%a==0) d2=m/a;
	else d2= m/a +1;
	
	cout<< d1*d2 ; 
	
	return 0;
}