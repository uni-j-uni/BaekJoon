#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int arr[10], rest = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int cnt = 0;

		for (int j = i + 1; j < 10; j++)
			if (arr[i] == arr[j])
				cnt += 1;
		if (cnt == 0)
			rest += 1;
	}

	printf("%d", rest);

	return 0;
}*/

int main()
{
	int arr[43] = { 0, };
	int num = 0, rest = 0;
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		arr[num % 42]++;
	}

	for (int i = 0; i < 43; i++)
		if (arr[i] != 0)
			rest++;
	
	printf("%d", rest);

	return 0;
}