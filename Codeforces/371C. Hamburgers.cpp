#include <bits/stdc++.h>

using namespace std;



int req[3];
int have[3];
int price[3];

long long r;

bool ok(long long x)
{
    long long rubles = r;
    for(int i = 0; i<3; i++)
    {
        long long neededMoney = (x*req[i] - have[i]) *price[i];
        if(neededMoney>0)
        {
            rubles -= neededMoney;
            if(rubles <0) return false;
        }
    }
    return true;
}

long long binarySearch()
{
    long long high = 2e12 +5, low = 0, med;
    while(high > low)
    {
        med = (high + low +1) >>1;
        if (ok(med)) low = med;
        else high = med-1 ;
    }
    return low;
}

int main()
{
    char S[110];
    cin >> S;
    for (int i =0; i < strlen(S);++i)
    {
        if (S[i] == 'S') req[1]++;
        else if (S[i] == 'B') req[0]++;
        else if (S[i] == 'C') req[2]++;
    }
    cin >> have[0]>>have[1]>>have[2];
    cin >> price[0]>>price[1]>>price[2];
    cin >> r;

    cout << binarySearch() << endl;
    return 0;
}