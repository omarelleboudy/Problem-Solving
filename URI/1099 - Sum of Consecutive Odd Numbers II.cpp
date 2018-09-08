#include <iostream>
using namespace std;
int main()
{
    int N,X,Y,A,b,c=0;
    cin >> N;
    for(A=1;A<=N;A++)
    {
        cin >> X >> Y;
        if(X==Y)
        {
            c=0;
            cout << c << endl;
        }
        else if(X<Y)
        {
            for(b=X+1,c=0;b<Y;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            cout << c << endl;
        }
        else
        {
            for(b=Y+1,c=0;b<X;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            cout << c << endl;
        }
    }
    return 0;
}