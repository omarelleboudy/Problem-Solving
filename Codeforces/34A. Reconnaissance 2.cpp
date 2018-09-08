#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int pos1,pos2;
    long long diff = 10000;
    long long a[100];

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i <n; i++)
    {
        if (i == n-1)
        {
            if (diff > abs(a[i]-a[0]))
            {
                diff = abs(a[i]-a[0]);
                pos1 = i+1;
                pos2 = 1;
            }
        }
        else if ( i != n-1)
        {
            if (diff > abs(a[i]-a[i+1]))
            {
                diff = abs(a[i]-a[i+1]);
                pos1 = i+1;
                pos2 = i+2;

            }
        }
    }

    cout << pos1 << " " << pos2;




    return 0;
}