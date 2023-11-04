/* Premier programme en C */
#include<stdlib.h>
#include<stdio.h>
#include <math.h>

void minuscule(char* lettre) {
	int position = 0;
	position = (int)*lettre;
	position += 32;
	*lettre = (char)position;
	printf("%c", *lettre);
	return;
}

int main()
{
	char lettre;
	scanf_s("%c", &lettre);
	minuscule(&lettre);
	return 0;
}