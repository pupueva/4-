#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	int n = 18, k = 24;
	printf("������ %d ��c�� %d ����� � 00 ������\n",n,k);
	printf("������ ���� %d ������ �����\n", n*60 + 60-k);
	printf("�� �������� �������� %d ����� � %d �����\n",24-n,60-k);
	printf("� 8:00 ������ %d ������\n",n*60*60-8*60*60+k*60);
	printf("������� ��� %d/24 ����� � ������� ������ %d/60 ����\n",n,k);
	printf("                                                                       \n");
	printf("                                                                       \n");
	
	
}