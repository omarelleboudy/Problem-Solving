#include <stdio.h>
#include <cstring>


int main()
{
    char A[100],B[100];
    scanf("%s%s",A,B);
    for(int i =0; i < strlen(A);i++ )
    {
        if (A[i]<='Z') A[i]+='a'-'A';
    }
    for(int i =0; i < strlen(B);i++ )
    {
        if (B[i]<='Z') B[i]+='a'-'A';
    }
    int c = strcmp(A,B);
    if (c>0) printf("1");
    if (c<0) printf("-1");
    if (c == 0) printf("0");




    return 0;
}