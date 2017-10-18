#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	int n;
	int sum = 0;
	cin >> n;
	int arr[3];
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum > 1)
		{
			c++;
		}
		sum = 0;

	}
	cout << c << endl;
	return 0;
}