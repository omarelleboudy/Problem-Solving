#include <iostream>
using namespace std;
int main()
{
    int n,numx,x,temp,time=0;
    int ar[100];
    cin >> n >> numx >> x;
    for (int i = 0;i<n;i++)
    {
        cin >> ar[i];

    }
    for (int i = 0; i < n; i++)
    {
        if(ar[i]>ar[i+1])
        {
            temp = ar[i+1];
            ar[i+1] = ar[i];
            ar[i] = temp;
        }
    }
    for (n;n>0;n--) {
        if (numx > 0)
        {
            ar[n-1] = 0;
            time+=x;
            numx--;
        }
        if(numx ==0) break;
    }
    for (int i = 0;i<n;i++)
    {
        time = time + ar[i];
    }
    cout << time<<endl;
    return 0;
}