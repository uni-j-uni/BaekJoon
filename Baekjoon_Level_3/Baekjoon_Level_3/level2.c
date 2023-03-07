#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, cycle = 1;

	scanf("%d", &N);

	int M = (N % 10) * 10 + (((N / 10) + (N % 10)) % 10);

	while (M != N)
	{
		cycle++;
		M = (M % 10) * 10 + (((M / 10) + (M % 10)) % 10);
	}

	printf("%d", cycle);

	return 0;
}