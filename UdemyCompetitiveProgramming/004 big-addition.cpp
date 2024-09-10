#include <bits/stdc++.h>
using namespace std;

string AddNumbers(string a, string b)
{
	if (a.size() > b.size())
		swap(a, b);

	string result = "";
	int carry = 0;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (int i = 0; i < a.size(); i++)
	{
		int digit = (a[i] - '0') + (b[i] - '0') + carry;
		result += (digit % 10) + '0';
		carry = digit / 10;
	}

	for (int i = a.size(); i < b.size(); i++)
	{
		int digit = (b[i] - '0') + carry;
		result += (digit % 10) + '0';
		carry = digit / 10;
	}

	if (carry)
		result += carry + '0';
	reverse(result.begin(), result.end());
	return result;
}
int main()
{
	string a, b;
	cin >> a >> b;

	string result = AddNumbers(a, b);
	cout << result;
}