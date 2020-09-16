#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "ua");
	int x, c;

	printf("Введiть число x: ");
	scanf("%d", &x);


	if(x == 0) {
		printf("Число нуль");
	}
	else if (x % 2 == 0 && x > 0)
	{
		printf("Число %d парне додатне число", x);
	}
	else if (x % 2 == 0 && x < 0) {
		printf("Число %d парне від'ємне число", x);
	}
	else if (x % 2 != 0 && x < 0) {
		printf("Число %d непарне від'ємне число", x);
	}
	else {
		printf("Число %d непарне додатне число", x);
	}

	printf("\n\n");
	
	return;
}
