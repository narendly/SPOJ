#include <iostream>
using namespace std;
int w[101];
int v[101];
int A[101][101];
int max(int A, int B)
{
	if (A < B)
	{
		return B;
	}
	else
		return A;
}

int main()
{
	int W, n;
	cin >> W >> n;

	while (W + n != 0)
	{
		int i = n;
		int ind = 1;
		//gets all the input stored
		while (n > 0)
		{
			cin >> w[ind] >> v[ind];
			ind++;
			n--;
			
		}

		//Knapsack

		//Initialize a 2-D array

		for (int x = 0; x <= W; x++)
		{
			A[0][x] = 0;
		}

		for (int num = 1; num <= i; num++)
		{
			for (int Wcap = 0; Wcap <= W; Wcap++)
			{
				if (w[num] > Wcap) A[num][Wcap] = A[num - 1][Wcap];
				else {
					A[num][Wcap] = max(A[num - 1][Wcap], A[num - 1][Wcap - w[num]] + v[num]);
				}
			}
		}
		int fun = A[i][W];
		int fee = 0;
		int count = 0; 
		int tempi = i;
		while (i >= 1 && W >= 0 && A[i][W] != 0)
		{
			if (A[i][W] != A[i - 1][W])
			{
			    W = W - w[i];
				fee += w[i]; count++;
				i--;
			}
			else
			{
				i--;
			}
		}

		if (count == 1)
		{
			for (int x = 1; x <= tempi; x++)
			{
				if (fun == v[x])
				{
					if (w[x] < fee)
					{
						fee = w[x];
					}
				}
			}
		}

		cout << fee << " " << fun << endl;
		cin >> W >> n;
	}
}