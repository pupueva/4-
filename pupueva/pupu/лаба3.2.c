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
	puts("������� �������� ��� �������:"); 
	scanf_s("%d",&dym);
	result = D * dym;
	resulf = I * dym;
	printf("%d ������ - ��� %.1f ��\n", dym, result);
	printf("%d ���������� ������ - ��� %.3f ��\n", dym, resulf);
}