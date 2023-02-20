#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char word[1000000] = "";
	int alphabet[26] = { 0, }, best = 0, same = 0, num = 0;

	scanf("%s", word);

	for (int i = 0; word[i] != NULL; i++)
		for (int j = 0; j < 26; j++)
		{
			if (toupper(word[i]) == j + 65)
				alphabet[j]++;
			if (alphabet[j] > best)
				best = alphabet[j];
		}

	for (int j = 0; j < 26; j++)
		if (alphabet[j] == best)
		{
			num = j;
			same++;
		}

	if (same == 1)
		printf("%c ", num + 65);
	else
		printf("?");

	return 0;
}

/*int main()
{
	char word[1000000];
	int alphabet[26], best = 0, size;
	char ans;

	scanf("%s", word);
	size = strlen(word);

	for (int i = 0; i < size; i++)
	{
		if (word[i] >= 'a')
			alphabet[word[i] - 'a']++;
		else
			alphabet[word[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == best)
			ans = '?';
		else if (alphabet[i] > best)
		{
			best = alphabet[i];
			ans = 'A' + i;
		}
	}

	printf("%c", ans);
}*/