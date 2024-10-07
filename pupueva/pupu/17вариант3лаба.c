#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x;
	float pi = 3.14f, s, v;
	printf("введите диаметр \n");
	scanf_s("%d", &x);
	s = pi * x * x;
	v = pi * x * x * x / 6;
	printf("Площадь поверхности %f \nОбъем %f", s, v);
	return 0;
}