#include <bits/stdc++.h>


using namespace std;

int main()
{
    cout<<fixed<<setprecision(5);
    double a,b,c;
    cin>>a>>b>>c;

    if(a==0 || sqrt((b*b-4*a*c)<0))
        cout<<"Impossivel calcular"<<endl;
    else{
        cout<<"R1 = "<<(-b+sqrt((b*b)-4*a*c))/(2*a)<<endl;
        cout<<"R2 = "<<(-b-sqrt((b*b)-4*a*c))/(2*a)<<endl;
    }
    return 0;
}