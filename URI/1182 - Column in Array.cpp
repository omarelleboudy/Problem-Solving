#include <bits/stdc++.h>


using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double M[12][12];
    char B;
    int a;
    double sum = 0;
    double med = 0;
    cin >> a;
    cin >> B;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    if (B == 'S')
    {
        for (int j = 0; j < 12; j++)
        {
                sum += M[j][a];
        }
        cout << sum<<endl;
    }

    else if ( B == 'M')
    {
        for (int j = 0; j < 12; j++)
        {
            sum += M[j][a];
        }
        med = sum/12.0;
        cout << med<<endl;
    }









    return 0;

}