#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE 
int main()
{
    setlocale(LC_ALL, "RUS");

	char c = '!';

    int i = 2;

    float f = 3.14f;

    double d = 5e-12; 

    printf("������� %c:\n",c);
    printf("������� %d:\n", i);
    printf("������� %f:\n", f);
    printf("������� %lf:\n", d);

    char cz;
    int iz;
    float fz;
    double dz;

    printf("������ cz:");
    scanf_s("%c",&cz);
    printf("%c", cz);
    printf("������ iz:");
    scanf_s("%d", &iz);
    printf("%d", iz);
    printf("������ fz:");
    scanf_s("%f", &fz);
    printf("%f", fz);
    
    //1a
    int pupu2;
    pupu2 = (int)fz;

    printf("\n ����� ����� ����� %d", pupu2);
    printf("\n������� ����� �� ����� %.2f", fz - pupu2);
    //1�



    return 0;
}