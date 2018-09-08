#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(2);
    
    int p1,p2,P1,P2;
    double p3,P3,a,b;
    cin >> p1 >> p2 >> p3;
    cin >> P1 >> P2 >> P3;
    a = p2*p3;
    b = P2*P3;
    cout << "VALOR A PAGAR: R$ " << a+b << endl;
    return 0;
}