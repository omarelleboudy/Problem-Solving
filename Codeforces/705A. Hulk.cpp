#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i =0; i < x; i++)
    {
        if (i%2 == 0)
        {
            cout << "I hate ";

        }
        if (i%2 !=0)
        {
            cout << "I love ";
        }
        if ( i != x-1)
        {
            cout << "that ";
        }
    }
    cout << "it"<<endl;

    return 0;
}