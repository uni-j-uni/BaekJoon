#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test;
	char quiz[80];

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		int total = 0, score = 0;

		scanf("%s", &quiz);

		for (int j = 0; j < 80; j++)
		{
			if (quiz[j] == 'O')
			{
				score++;
				total += score;
			}
			else if (quiz[j] == 'X')
				score = 0;
			else
				break;
		}
		printf("%d\n", total);
	}

	return 0;
}