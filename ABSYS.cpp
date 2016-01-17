#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
stringstream vex;
int toInt(string x)
{
	vex.clear();
	vex << x; int temp; vex >> temp;
	return temp;
}
string toString(int x)
{
	vex.clear(); string a; vex << x; vex >> a; return a;
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		vector<string> sexy(5); size_t index;
		for (int i = 0; i < 5; i++)
		{
			cin >> sexy[i];
			//cout << sexy[i] << endl;
			if (sexy[i].find("machula") != string::npos) index = i;
		}
		if (index == 0) cout << toInt(sexy[4]) - toInt(sexy[2]) << " + " << sexy[2] << " = " << sexy[4] << endl;
		else if (index == 2) cout << sexy[0] << " + " << toInt(sexy[4]) - toInt(sexy[0]) << " = " << sexy[4] << endl;
		else if (index == 4) cout << sexy[0] << " + " << sexy[2] << " = " << toInt(sexy[0]) + toInt(sexy[2]) << endl;

	}


}