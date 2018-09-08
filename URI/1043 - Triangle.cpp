#include<bits/stdc++.h>
using namespace std;


int main ()
{
    cout << fixed << setprecision (1);
    float a,b,c,p,area;
    cin >> a >> b >> c;
    if (a+b>c && b+c>a && a+c>b)
    {
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);  
    }

    else
    {
        area=.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}