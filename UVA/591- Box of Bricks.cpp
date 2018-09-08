include<stdio.h>
int main()
{
	int n,i,a[100],t=1,sum,ans,avr;
	while(scanf("%d",&n)==1 && n!=0)
	{
		sum=0;
		ans=0;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		
		for(i=0;i<n;i++) sum=sum+a[i];
		
		avr=sum/n;
		
		for(i=0;i<n;i++) 
			if(a[i]>avr) ans=ans+(a[i]-avr);
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,ans);
		t++;    
}
	return 0;
}