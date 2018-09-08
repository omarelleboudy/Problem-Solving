#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(5);
    double A;
    double B;
    double MEDIA;
    double W = 11.0;
    cin >> A >> B;
    MEDIA = ((A*3.5)+(B*7.5))/W;
    
    cout << "MEDIA = " << MEDIA << endl;
   return 0;
}

 