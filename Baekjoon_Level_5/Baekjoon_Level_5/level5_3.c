#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, cnt = 0;

	scanf("%d", &N);

	cnt = find(N);

	printf("%d", cnt);

	return 0;
}

int find(int N)
{
	int M, arr[4] = { 0, }, cnt = 0;

	for (int i = 1; i <= N; i++)
	{
		M = i;

		for (int j = 0; j < 4; j++)
		{
			arr[j] = M % 10;
			M /= 10;
		}

		if (arr[2] != 0)
			if (arr[1] - arr[0] == arr[2] - arr[1])
				cnt++;
			else;

		else if (arr[3] == 0)
			cnt++;
	}

	return cnt;
}

/*int main()
{
	int N, arr[4] = { 0, }, cnt = 0, M;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		M = i;

		for (int j = 0; j < 4; j++)
		{
			arr[j] = M % 10;
			M /= 10;
		}

		if (arr[2] != 0)
			if (arr[1] - arr[0] == arr[2] - arr[1])
				cnt++;
			else;

		else if (arr[3] == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}*/