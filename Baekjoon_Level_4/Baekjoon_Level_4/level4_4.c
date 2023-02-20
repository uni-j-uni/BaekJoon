#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[9], max = 0, num = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		
		if (arr[i] > max)
		{
			max = arr[i];
			num = i + 1;
		}
	}

	printf("%d\n%d", max, num);

	return 0;
}