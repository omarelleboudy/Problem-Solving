

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ cout << fixed << setprecision(2);
    char r;
    int a,Rab = 0,Rat = 0,Frog = 0,n;
    cin >> n;

    for(int i = 0; i < n;i++)
    {
        cin >> a >> r;
        if (r == 'C') Rab+=a;
        if (r == 'R') Rat+=a;
        if (r == 'S') Frog+=a;

    }
    double total = Rab + Rat + Frog;
    double p1 = 100*Rab/total;
    double p2 = 100*Rat/total;
    double p3 = 100*Frog/total;



    cout << "Total: " << Rab+Frog+Rat<<" cobaias"<<endl<< "Total de coelhos: "<< Rab<<endl<< "Total de ratos: " << Rat<<endl <<"Total de sapos: " << Frog<<endl;
    cout << "Percentual de coelhos: "<<p1 << " %"<<endl;
    cout << "Percentual de ratos: "<<p2<< " %"<<endl;
    cout << "Percentual de sapos: "<<p3 << " %"<<endl;


    return 0;
}