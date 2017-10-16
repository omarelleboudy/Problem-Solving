#include "stdafx.h"
#include<cmath>
#include <iostream>
using namespace std;

int main()
{
	int arr[6][6];
	int steps;
	for (int j=1; j<6;j++)
	{
		for (int i = 1; i < 6; i++)
		{
			cin >> arr[j][i];
		}
	}
	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == 1)
			{
				steps = abs(3 - i) + abs(3 - j);
			
			}
		}
	}
	cout << steps << endl;
	
	return 0;
}