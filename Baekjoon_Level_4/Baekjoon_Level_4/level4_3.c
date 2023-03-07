#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 최소, 최대
int main()
{
	int N, arr[1000000], Max = -1000000, Min = 1000000;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] > Max)
			Max = arr[i];
		if (arr[i] < Min)
			Min = arr[i];
	}

	printf("%d %d", Min, Max);

	return 0;
}