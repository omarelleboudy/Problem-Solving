#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(3);
    double A,B,C;
    double a,b,c,d,e;

    cin >> A>>B>>C;

    a = 0.5*A*C;
    b = pow(C,2) * 3.14159;
    c = ((A+B)/2.0)*C;
    d = pow(B,2);
    e = A*B;
    
    cout << "TRIANGULO: " << a << endl;
    cout << "CIRCULO: " << b << endl;
    cout << "TRAPEZIO: " << c << endl;
    cout << "QUADRADO: " << d << endl;
    cout << "RETANGULO: " << e << endl;
    
    return 0;
}