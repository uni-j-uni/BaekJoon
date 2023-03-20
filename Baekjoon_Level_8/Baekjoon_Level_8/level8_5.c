#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ¼Ò¼ö
int main()
{
	int M, N, sum = 0, min = 10000;

	scanf("%d %d", &M, &N);

	for (; M <= N; M++)
	{
		if (M == 2)
		{
			sum += 2;
			min = 2;
		}
		for (int i = 2; i < M; i++)
			if (M % i == 0)
				break;
			else if (i == M - 1)
			{
				sum += M;

				if (M < min)
					min = M;
			}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}