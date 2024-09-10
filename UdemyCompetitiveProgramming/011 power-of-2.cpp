#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int len = log2(n) ;


	if(n&(n-1))
		cout << "No power of two";
	else
	cout <<"Power of two";
}