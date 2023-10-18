/* Premier programme en C */
#include<stdlib.h>
#include<stdio.h>
#include <math.h>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;

	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);

	float delta = (b * b) - 4 * a * c;

	if (delta > 0) {
		float r1 = (-b - sqrt(delta)) / (2 * a);
		float r2 = (-b + sqrt(delta)) / (2 * a);
		printf("%f et %f sont les racines\n");
	}
	else if (delta == 0) {
		float r = -b / (2 * a);
		printf("%f est racine double\n");
	}
	else
	{
		printf("Pas de solutions réelles");
	}
	return 0;
}