#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c; 
    cin >> n >> a >> b >> c;
    int maxi(0);
    for(int i=0; i*a <= n; i++ )
        
        for(int j=0; j*b + i*a <= n; j++)
        {
            int k = (n - i*a - b*j) / c;
            if(i*a + b*j + k*c == n )
                if(i + j + k > maxi) maxi = i + j + k ;
        }
    cout << maxi;
}