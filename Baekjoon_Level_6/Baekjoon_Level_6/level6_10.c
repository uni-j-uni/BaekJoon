#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 너의 평점은
/*int main()
{
	double Score, Total = 0, Sum = 0;

	for (int i = 0; i < 20; i++)
	{
		char Subject[51] = "", Grade[3] = "";
		scanf("%s %lf %s", Subject, &Score, Grade);

		if (Grade[0] == 'P')
			Score = 0;
		else if (Grade[0] == 'A' && Grade[1] == '+')
			Sum += 4.5 * Score;
		else if (Grade[0] == 'A' && Grade[1] == '0')
			Sum += 4.0 * Score;
		else if (Grade[0] == 'B' && Grade[1] == '+')
			Sum += 3.5 * Score;
		else if (Grade[0] == 'B' && Grade[1] == '0')
			Sum += 3.0 * Score;
		else if (Grade[0] == 'C' && Grade[1] == '+')
			Sum += 2.5 * Score;
		else if (Grade[0] == 'C' && Grade[1] == '0')
			Sum += 2.0 * Score;
		else if (Grade[0] == 'D' && Grade[1] == '+')
			Sum += 1.5 * Score;
		else if (Grade[0] == 'D' && Grade[1] == '0')
			Sum += 1.0 * Score;
		Total += Score;
	}
	printf("%.6lf", Sum / Total);

	return 0;
}*/

int main()
{
	double Score, Total = 0, Sum = 0;

	for (int i = 0; i < 20; i++)
	{
		double Mul = 0;
		char Subject[51] = "", Grade[3] = "";

		scanf("%s %lf %s", Subject, &Score, Grade);

		if (Grade[0] == 'P') Score = 0;
		if (Grade[0] == 'A') Mul = 4.0;
		if (Grade[0] == 'B') Mul = 3.0;
		if (Grade[0] == 'C') Mul = 2.0;
		if (Grade[0] == 'D') Mul = 1.0;
		if (Grade[1] == '+') Mul += 0.5;

		Sum += Score * Mul;
		Total += Score;
	}
	printf("%.6lf", Sum / Total);

	return 0;
}