#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// °ø ³Ö±â
int main()
{
	int Basket[100] = { 0, }, N = 0, M = 0;

	scanf("%d %d", &N, &M);

	for (; M > 0; M--)
	{
		int i = 0, j = 0, k = 0;

		scanf("%d %d %d", &i, &j, &k);
			
		for (; i - 1 != j; i++)
			Basket[i - 1] = k;
	}

	for (int a = 0; a < N; a++)
		printf("%d ", Basket[a]);

	return 0;
}