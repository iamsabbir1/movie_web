#include <bits/stdc++.h>
using namespace std;
void uniqeNo2(vector<int> arr)
{
	int n = arr.size();
	// first step
	int Xor = 0;
	for (int i = 0; i < n; i++)
	{
		Xor ^= arr[i];
	}

	// second step
	int temp = Xor;
	int pos = 0;
	while ((temp & 1) == 0)
	{
		pos++;
		temp >>= 1;
	}

	// fiters out the numbers from the array which has set bit at post
	int setA = 0;
	int setB = 0;

	int mask = (1 << pos);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] & mask)
		{
			setB ^= arr[i];
		}
		else
			setA ^= arr[i];
	}
	cout << setA << "  " << setB;
}

int main()
{
	vector<int> arr = {1, 3, 5, 4, 3, 1, 5, 7};
	uniqeNo2(arr);
}