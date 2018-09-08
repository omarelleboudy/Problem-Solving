#include <iostream>
 
using namespace std;
 
int main() {
 
    int arr[6];
    int c = 0;
    for (int i = 0; i < 6;i++)
    {
        cin >> arr[i];
        if (arr[i]%2 == 0)
        {
            c++;
        }
    }
    cout << c << " valores positivos"<<endl;
    return 0;
}