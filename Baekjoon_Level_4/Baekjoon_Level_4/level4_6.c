#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 공 바꾸기
int main()
{
	int Basket[100] = { 0, }, N = 0, M = 0;

	scanf("%d %d", &N, &M);

	for (int a = 0; a < N; a++)
		Basket[a] = a + 1;

	for (; M > 0; M--)
	{
		int i = 0, j = 0, tmp = 0;

		scanf("%d %d", &i, &j);

		tmp = Basket[i - 1];
		Basket[i - 1] = Basket[j - 1];
		Basket[j - 1] = tmp;
	}

	for (int a = 0; a < N; a++)
		printf("%d ", Basket[a]);

	return 0;
}