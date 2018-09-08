#include <bits/stdc++.h>


using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double M[12][12];
    char B;
    double sum = 0;

    cin >> B;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (j < i && j < 12-1-i) {sum += M[i][j];}
        }
    }

    if (B == 'S')
    {
        cout << sum <<endl;
    }

    else if (B == 'M' )
    {
        cout << sum/30.0<<endl;
    }

    return 0;

}