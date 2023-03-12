#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 평균은 넘겠지
int main()
{
	int C, N;

	scanf("%d", &C);

	for (int i = 0; i < C; i++)
	{
		double score[1000], over = 0, sum = 0;

		scanf("%d", &N);

		for (int j = 0; j < N; j++)
		{
			scanf("%lf", &score[j]);
			sum += score[j];
		}

		for (int j = 0; j < N; j++)
			if (score[j] > sum / N)
				over++;

		printf("%.3lf%%\n", over / N * 100);
	}

	return 0;
}

/*int main(void)
{
	int test, x, y;
	int student;
	double score[1000] = { 0, }, sum[1000] = { 0, };
	double count[1000] = { 0, };

	scanf("%d", &test);

	for (x = 0; x < test; x++)
	{
		scanf("%d", &student);

		for (y = 0; y < student; y++)
			scanf(" %lf", &score[y]);

		for (y = 0; y < student; y++)
			sum[x] += score[y];

		sum[x] = sum[x] / student;

		for (y = 0; y < student; y++)
			if (sum[x] < score[y])
				++count[x];

		count[x] = count[x] / student;
	}
	for (x = 0; x < test; x++)
		printf("%lf%\n", count[x] * 100);
	return 0;
}*/