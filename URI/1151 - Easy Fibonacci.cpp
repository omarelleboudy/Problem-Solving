#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,fib1 = 0, fib2 = 1, fib3 = 1;
    cin >> n;

    if(n == 0)
    {
        cout << "0";
        return 0; }
    else {
        cout << fib1<<" ";

        for (int i = 0; i < n-1; i++)
        {




            if(i < n-2){cout << fib3 << " ";}
            else if(i == n-2){ cout << fib3<<endl;}
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;

        }

    }
    return 0;
	}