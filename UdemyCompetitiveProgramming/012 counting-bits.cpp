#include <iostream>
using namespace std;
int countSetBits(int n)
{
	int count = 0;
	while (n)
	{
		// if(n&1)
		//	count++;

		count += (n & 1);

		n >>= 1;
	}
	return count;
}

void binaryRep(int n)
{
	for (int i = 10; i >= 0; i--)
	{
		if ((n & 1 << i))
			cout << 1;
		else
			cout << 0;
	}
	cout << endl;
}

int count_bits_hack(int n)
{
	int ans = 0;
	while (n)
	{
		// removes the last set bit from the current number
		// binaryRep(n);
		// binaryRep(n-1);
		n = n & (n - 1);
		ans++;
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	//	cout << countSetBits(n);

	cout << count_bits_hack(n);
}