#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int num1;
	int num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("������� �����:num1,num2");
	printf("\n ����� : %d \n �������� : %d \n ������������ : %d  ", num1 + num2, num1 - num2, num1 * num2);
	printf("\n ������� : %d \n ������� : %d ", num1 / num2, num1 % num2);
	return 0;
}