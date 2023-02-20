#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	char word[16], alphabet[26];
	int time[26], second = 3, call = 0;

	scanf("%s", word);

	for (int i = 1; i <= 15; i++)
	{
		alphabet[i - 1] = (char)(i + 64);
		time[i - 1] = second;

		if (i % 3 == 0)
			second++;
	}

	for (int i = 15; i < 26; i++)
	{
		alphabet[i] = (char)(i + 65);
		time[i] = second;

		if (i % 4 == 2)
			second++;
	}
	time[22]++;

	for (int i = 0; word[i] != NULL; i++)
		for (int j = 0; j < 26; j++)
			if (word[i] == alphabet[j])
				call += time[j];

	printf("%d", call);

	return 0;
}*/

int main()     //다른 사람 코드 고침
{
	int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 }, time = 0;
	char word[16];

	scanf("%s", word);

	for (int i = 0; word[i] != NULL; i++)
		time += dial[word[i] - 'A'];

	printf("%d", time);

	return 0;
}