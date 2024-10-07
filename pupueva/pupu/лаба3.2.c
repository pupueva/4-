#include <stdio.h> 
#include <locale.h> 
#define D 2.54 
#define I 2.32166 
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result;
	float resulf;
	puts("¬ведите значение дл€ расчЄта:"); 
	scanf_s("%d",&dym);
	result = D * dym;
	resulf = I * dym;
	printf("%d дюймов - это %.1f см\n", dym, result);
	printf("%d испанского дюймов - это %.3f см\n", dym, resulf);
}