#include <iostream>
using namespace std;

int max(int a, int b) { if (a > b) { return a; } else { return b; } }

int main()
{
	int rep; cin >> rep; int numObj = rep;
	int s = 1; int e = rep + 1;
	int T[2001]; int memo[2001][2001]; int i = 1;
	while (rep--)
	{
		cin >> T[i++];
	}

/*	for (int x = 0; x <= 2000; x++)
	{
		memo[0][x] = 
	}
	*/
	for (s; s <= numObj; s++)
	{
		int age = 1;
		for (e; e >= 1; e--)
		{
			//memo[s][e] = max(memo[s+1][e] + age* T[s], memo[s][e-1] + age * T[e]);

			age++;
		}
	}
	//cout << memo[numObj][numObj] << endl;
	int qq; cin >> qq;
}