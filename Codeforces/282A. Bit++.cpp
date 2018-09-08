#include <iostream>
using namespace std;

int main ()
{
    int n,c = 0;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == "X++" || x == "++X")
        {
            c++;
        }
        else {
            c--; 
        }
    }
    
    cout << c << endl;
    
    
    
    
    return 0;
}