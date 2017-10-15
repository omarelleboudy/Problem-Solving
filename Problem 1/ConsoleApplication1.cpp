#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int x;
	int w = 0;
	int n, h;
	cin >> n;
	cin >> h;
	for (int i = 0; i < n; i++)
	{

		cin >> x;
		if (x <= h)
		{
			w += 1;
		}
		if (x > h)
		{
			w += 2;

		}
	}

	cout << w;




	return 0;
}