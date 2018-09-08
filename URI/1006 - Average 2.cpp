#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(1);
    double A;
    double B;
    double C;
    double MEDIA;
    double W = 10.0;
    cin >> A >> B >> C;
    MEDIA = ((A*2)+(B*3)+(C*5))/W;
    
    cout << "MEDIA = " << MEDIA << endl;
   return 0;
}

 