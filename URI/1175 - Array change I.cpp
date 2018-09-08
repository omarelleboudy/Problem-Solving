#include <iostream>

using namespace std;
int main()
{
    int a[20];
    int n=20, pos=0;

    for(int i=0;i<20;++i){
        cin>>a[i];

    }
    for(int i =n-1 ;i>=0;--i){
        pos=n-i-1;
        cout<<"N"<<"["<<pos<<"]"<<" = "<<a[i]<<endl;;
    }
    return 0;
}
