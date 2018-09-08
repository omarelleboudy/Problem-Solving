#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() 
{
    cout << fixed << setprecision(3);
    
    double R;
    double Pi = 3.14159;
    double Vol;
    
    cin >> R;
    
    Vol = (4/3.0) * Pi * pow(R,3);
    
    cout << "VOLUME = " << Vol << endl; 
 
    return 0;
}