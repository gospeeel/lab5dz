#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	double x=0, y=0, z=0, w=0;
	double c = 2;
	double a = 7.1 * pow(10, -9);
	printf("¬ведите x: \n");
	scanf("%lf", &x);
	printf("¬ведите y: \n");
	scanf("%lf", &y);
	z = pow(a, 5) + pow(sin(y - c), 4);
	w = pow(sin(x + y), 3) + fabs(x - y);
	printf("–езультат: %lf", z / w);

}