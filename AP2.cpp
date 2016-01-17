#include "stdio.h"

int main()
{
	int N; scanf("%d", &N);
	while (N--)
	{
		double A, B, S; scanf("%lf", &A); scanf("%lf", &B); scanf("%lf", &S);
		double Avg = (A + B) / 2;
		int numE = S / Avg; printf("%d\n", numE);
		int diff = (B - A) / (numE - 5);
		int E1 = A - 2 * diff;
		for (int i = 0; i < numE; i++)
		{
			printf("%d", E1 + diff*i);
			if (i != numE - 1) printf(" ");
		}
		printf("\n");
	}
}