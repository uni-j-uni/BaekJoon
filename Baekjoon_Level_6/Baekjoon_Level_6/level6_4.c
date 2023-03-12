#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 바구니 순서 바꾸기
int main()
{
	int Basket[100], Change[100], N = 0, M = 0;

	scanf("%d %d", &N, &M);

	for (int a = 0; a < N; a++)
	{
		Basket[a] = a + 1;
		Change[a] = a + 1;
	}

	for (; M > 0; M--)
	{
		int i = 0, j = 0, k = 0;

		scanf("%d %d %d", &i, &j, &k);

		for (int b = i, c = k; c <= j; c++)
		{
			Change[b - 1] = Basket[c - 1];
			b++;
		}
		
		for (; i < k; i++) Change[j - k + i] = Basket[i - 1];

		for (int a = 0; a < N; a++) Basket[a] = Change[a];
	}

	for (int a = 0; a < N; a++) printf("%d ", Basket[a]);

	return 0;
}