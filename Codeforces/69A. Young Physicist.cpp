#include <iostream>
using namespace std;


int main ()
{
    int y;
    long long temp1,temp2,temp3;
    long long X = 0,Y = 0,Z = 0;
    cin >> y;
    for ( int i = 0; i < y; i++) {
        cin >> temp1 >> temp2 >> temp3;
        X = X + temp1;
        Y = Y + temp2;
        Z = Z + temp3;
    }
    if ( X == 0 && Y == 0 && Z == 0)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }



    return 0;
}