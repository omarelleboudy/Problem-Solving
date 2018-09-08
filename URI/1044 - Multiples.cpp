#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a >> b;
    if ( a > b )
    {
        if (a%b == 0)
        {
            cout << "Sao Multiplos"<< endl;
            return 0;
        }
    }
     if ( a < b )
    {
        if (b%a == 0)
        {
            cout << "Sao Multiplos"<< endl;
            return 0;
        }
    }
    cout << "Nao sao Multiplos"<<endl;
 
    return 0;
}