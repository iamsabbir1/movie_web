#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void generateAllSubsequences(char arr[])
{
	int n = strlen(arr);
	for (int i = 0; i < (1 << n); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
				cout << arr[j];
		}
		cout << endl;
	}
}

int main()
{
	char arr[10000];
	cin >> arr;

	generateAllSubsequences(arr);
}