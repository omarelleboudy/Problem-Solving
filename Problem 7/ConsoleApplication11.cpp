#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	for (int i = 0; i < str1.length(); i++)
	{
		str1[i] = tolower(str1[i]);
	}
	for (int i = 0; i < str2.length(); i++)
	{
		str2[i] = tolower(str2[i]);
	}

	if (str1 == str2)
	{
		cout << "0";
	}
	if (str1 < str2)
	{
		cout << "-1";
	}
	if (str1 > str2)
	{
		cout << "1";
	}
	return 0;
}
