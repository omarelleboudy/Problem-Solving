#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int counterA=0;
	int counterD=0;
	int n;
	cin >> n;
	char s[100];
		for (int i = 0; i < n; i++)
	{
			cin >> s[i];
			if (s[i] == 'A')
			{
				counterA += 1;
			}
			if (s[i] == 'D')
			{
				counterD += 1;
			}
    }
	 
		if (counterA > counterD)
		{
			cout << "Anton" << endl;
		}
		else if (counterD > counterA)
		{
			cout << "Danik" << endl;
		}
		else {
			cout << "Friendship" << endl;
		}
		return 0;
}