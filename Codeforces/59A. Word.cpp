#include <bits/stdc++.h>
using namespace std;


int main()
{
    int uc=0,lc=0;
    string A;
    cin >> A;

    for (char c : A)
    {
        if (c > 'Z') lc++;
        else uc++;
    }
    if (uc <= lc)
    {
        for (int i = 0; i < A.length(); i++) {
            A[i] = tolower(A[i]);
        }
    }
    else if (uc > lc)
    {
        for (int i = 0; i < A.length(); i++) {
            A[i] = toupper(A[i]);
        }

    }
    cout << A << endl;



    return 0;
}

