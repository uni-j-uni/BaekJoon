#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int N, max = 0;
	double sum = 0, score[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);
		
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] * 100 / max;
		sum += score[i];
	}

	printf("%lf", sum / N);

	return 0;
}*/

int main()
{
	int N, max = 0;
	double sum = 0, score[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);

		if (score[i] > max)
			max = score[i];

		sum += score[i];
	}

	printf("%lf", sum / max * 100 / N);

	return 0;
}