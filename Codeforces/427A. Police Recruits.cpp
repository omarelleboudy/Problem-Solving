#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, p=0,x=0;
    cin >> n;
    while(n--)
    {
        cin >> temp;
        if(temp>0) p+=temp;
        else if(p>0) p--;
        else x++;
    }
    cout << x << endl;
    return 0;
}