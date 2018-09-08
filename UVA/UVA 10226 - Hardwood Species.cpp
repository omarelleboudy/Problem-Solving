#include <bits/stdc++.h>

using namespace std;


int main()
{
    map<string,double> map;
    cout << fixed << setprecision(4);
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int c = 0;
        string s;

        while (getline(cin,s))
        {
            if (s.empty()) break;
            map[s]++;
            c++;
        }
        if (map.size() > 0)
            for (auto it = map.begin(); it != map.end(); it++)
                cout << (*it).first << " " << ((*it).second / c) * 100 << endl;
        
        if(t>0) printf("\n");
        map.clear();

    }
    return 0;
}