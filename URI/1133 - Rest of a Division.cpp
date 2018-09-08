#include<stdio.h>
int main()
{
    int a,b,i,temp;
    scanf("%d %d",&a, &b);
    if(a > b){temp = a;a = b;b = temp;}
    a++;
    for(i = a;i < b;i++){
        if(i%5 == 2 || i%5 == 3)printf("%d\n",i);
    }
    return 0;
}
