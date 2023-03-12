#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 바구니 뒤집기
int main()
{
	int Basket[100], N = 0, M = 0;

	scanf("%d %d", &N, &M);

	for (int a = 0; a < N; a++)
		Basket[a] = a + 1;

	for (; M > 0; M--)
	{
		int i = 0, j = 0, tmp = 0, len = 0;

		scanf("%d %d", &i, &j);
		
		len = (j - i + 1) / 2;
		
		for (int k = 0; k < len; k++)
		{
			tmp = Basket[i - 1];
			Basket[i - 1] = Basket[j - 1];
			Basket[j - 1] = tmp;
			i++;
			j--;
		}
	}

	for (int a = 0; a < N; a++)
		printf("%d ", Basket[a]);

	return 0;
}