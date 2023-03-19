#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 약수들의 합
int main()
{
	while (1)
	{
		int n = 0, sum = 0, j = 0, Divisor[100000] = { 0, };

		scanf("%d", &n);
		
		if (n == -1)
			break;

		for (int i = 1; i < n; i++)
			if (n % i == 0)
			{
				sum += i;
				Divisor[j] = i;
				j++;
			}
		
		if (sum == n)
		{
			printf("%d = ", n);

			for (int j = 0; Divisor[j] != 0; j++)
			{
				printf("%d", Divisor[j]);
				if (Divisor[j + 1] != 0)
					printf(" + ");
			}
		}
		else
			printf("%d is NOT perfect.", n);
		printf("\n");
	}

	return 0;
}