#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���μ�����
int main()
{
	int N;

	scanf("%d", &N);

	while (1)
	{
		for (int i = 2; i <= N; i++)
			if (N % i == 0)
			{
				N /= i;
				printf("%d", i);
				break;
			}
		if (N == 1)
			break;

		printf("\n");
	}

	return 0;
}