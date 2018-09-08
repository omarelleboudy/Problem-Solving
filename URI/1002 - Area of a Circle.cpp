#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    double A;
    double R;
    double Pi = 3.14159;
    cin >> R;
    A = Pi * pow(R,2);
    cout <<fixed << setprecision(4)<< "A=" << A << endl;
   
 
    return 0;
}
