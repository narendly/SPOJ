#include <iostream>
#include <string>
using namespace std;


int rev(int a)
{
	int res, tem;
	res = 0;
	while (a >= 1)
	{
		tem = a % 10;
		res = res * 10 + tem;
		a = a / 10;
	}
	return res;
}

int main() {
	// your code goes here
	int c, a, b;
	cin >> c;
	while (c--)
	{
		cin >> a >> b;
		cout << rev(rev(a) + rev(b)) << endl;
	}
	getchar();
	return 0;
}