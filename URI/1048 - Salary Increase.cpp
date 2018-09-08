#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    cout << fixed << setprecision (2);
    float a,b,c;
    cin >> a;
    if (a >= 0 && a <= 400.00)
    {   c = 15.00/100.00;
        b = a*c;
        cout << "Novo salario: " << a+b<<endl;
        cout << "Reajuste ganho: " << b<<endl;
        cout << "Em percentual: 15 %"<<endl;
    }
    if (a > 400.00 && a <= 800.00)
    {   c = 12.00/100.00;
        b = a*c;
        cout << "Novo salario: " << a+b<<endl;
        cout << "Reajuste ganho: " << b<<endl;
        cout << "Em percentual: 12 %"<<endl;
    }
    if (a > 800.00 && a <= 1200.00)
    {   c = 10.00/100.00;
        b = a*c;
        cout << "Novo salario: " << a+b<<endl;
        cout << "Reajuste ganho: " << b<<endl;
        cout << "Em percentual: 10 %"<<endl;
    }
    if (a > 1200.00 && a <= 2000.00)
    {   c = 7.00/100.00;
        b = a*c;
        cout << "Novo salario: " << a+b<<endl;
        cout << "Reajuste ganho: " << b<<endl;
        cout << "Em percentual: 7 %"<<endl;
    }
    if (a > 2000.00)
    {   c = 4.00/100.00;
        b = a*c;
        cout << "Novo salario: " << a+b<<endl;
        cout << "Reajuste ganho: " << b<<endl;
        cout << "Em percentual: 4 %"<<endl;
    }
    return 0;
}