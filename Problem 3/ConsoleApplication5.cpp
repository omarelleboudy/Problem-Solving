#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int yrs = 0;

	for (int i = 0; i < 100; i++)
	{
		a *= 3;
		b *= 2;
		yrs += 1;
		if (a > b)

			break;
	}
	cout << yrs;
	return 0;
	}