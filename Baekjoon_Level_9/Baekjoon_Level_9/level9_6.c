#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 삼각형 외우기
int main()
{
	int Angle1, Angle2, Angle3;

	scanf("%d %d %d", &Angle1, &Angle2, &Angle3);

	if (Angle1 + Angle2 + Angle3 != 180)
		printf("Error");
	else if (Angle1 == 60 && Angle2 == 60 && Angle3 == 60)
		printf("Equilateral");
	else if (Angle1 == Angle2 || Angle2 == Angle3 || Angle3 == Angle1)
		printf("Isosceles");
	else
		printf("Scalene");

	return 0;
}