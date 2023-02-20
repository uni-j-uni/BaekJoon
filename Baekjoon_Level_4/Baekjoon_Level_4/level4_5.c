#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int student[30] = { 0, }, submit;

	for (int i = 0; i < 30; i++)
		student[i] = i + 1;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &submit);

		for (int i = 0; i < 30; i++)
			if (submit == student[i])
				student[i] = 0;
	}
	
	for (int i = 0; i < 30; i++)
		if (student[i] != 0)
			printf("%d\n", i + 1);

	return 0;
}*/

int main()
{
	int student[30] = { 0, }, submit;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &submit);
		student[submit - 1] = submit;
	}

	for (int i = 0; i < 30; i++)
		if (student[i] == 0)
			printf("%d\n", i + 1);

	return 0;
}