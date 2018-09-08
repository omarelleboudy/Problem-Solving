#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d,w,m;
    cin >> d >> w >> m;
    if(d >= w+m || d < w) cout << "good luck"<<endl;
    else if(d >=w && d < w+m) cout << "see you next semester"<<endl;
    return 0;
}
