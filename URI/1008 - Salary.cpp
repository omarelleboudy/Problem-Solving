#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(2);
    
    int n;
    int h;
    double f;
    
    cin >> n >> h >> f;
    
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << h * f << endl;
    
    return 0 ;
}

 
 