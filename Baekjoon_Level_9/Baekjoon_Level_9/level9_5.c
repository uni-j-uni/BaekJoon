#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// ´ëÁö
int main()
{
	int N, X[100000], Y[100000], Xmax = -20000, Xmin = 20000, Ymax = -20000, Ymin = 20000;

	scanf("%d", &N);

	if (N == 1)
	{
		printf("0");
		return 0;
	}

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &X[i], &Y[i]);

		if (X[i] > Xmax)
			Xmax = X[i];
		if (X[i] < Xmin)
			Xmin = X[i];
		if (Y[i] > Ymax)
			Ymax = Y[i];
		if (Y[i] < Ymin)
			Ymin = Y[i];
	}
	printf("%d", (Xmax - Xmin) * (Ymax - Ymin));

	return 0;
}