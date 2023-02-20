#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main()
{
	int N, v, arr[100], total = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	scanf("%d", &v);

	for (int i = 0; i < N; i++)
		if (arr[i] == v)
			total++;

	printf("%d", total);

	return 0;
}