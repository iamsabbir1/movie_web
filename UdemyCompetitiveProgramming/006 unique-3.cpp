#include <bits/stdc++.h>
using namespace std;

void updateSum(vector<int> &sumArr, int x)
{

	for (int i = 0; i < 32; i++)
	{
		int ith_bit = x & (1 << i);
		if (ith_bit)
			sumArr[i]++;
	}
}

int numFromBits(vector<int> sum)
{
	int num = 0;
	for (int i = 0; i < 32; i++)
	{
		num += (1 << i) * sum[i];
	}
	return num;
}

int uniqueNo3(vector<int> arr)
{
	vector<int> sumArr(32, 0);
	int n = arr.size();
	for (int x : arr)
	{
		updateSum(sumArr, x);
	}

	for (int i = 0; i < 32; i++)
		sumArr[i] %= 3;
	return numFromBits(sumArr);
}
int main()
{
	vector<int> arr = {1, 3, 5, 4, 3, 1, 5, 5, 3, 1};
	cout << uniqueNo3(arr);
}