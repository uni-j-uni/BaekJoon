#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[1000000];
	int cnt = 0;
	
	gets(sentence);

	char* ptr = strtok(sentence, " ");

	while (ptr != NULL)
	{
		cnt++;
		ptr = strtok(NULL, " ");
	}

	printf("%d", cnt);

	return 0;
}