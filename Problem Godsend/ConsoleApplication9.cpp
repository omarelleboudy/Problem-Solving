#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	bool First = false;
	int n;
	cin >> n;

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 != 0)
		{
			First = true;
			break;

		}
		
	}
	if (First == true)
		cout << "First";
	else
		cout << "Second";
	return 0;
}
