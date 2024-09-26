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

    printf("вывести %c:\n",c);
    printf("вывести %d:\n", i);
    printf("вывести %f:\n", f);
    printf("вывести %lf:\n", d);

    char cz;
    int iz;
    float fz;
    double dz;

    printf("ввести cz:");
    scanf_s("%c",&cz);
    printf("%c", cz);
    printf("ввести iz:");
    scanf_s("%d", &iz);
    printf("%d", iz);
    printf("ввести fz:");
    scanf_s("%f", &fz);
    printf("%f", fz);
    
    //1a
    int pupu2;
    pupu2 = (int)fz;

    printf("\n целая часть числа %d", pupu2);
    printf("\nдробная часть от числа %.2f", fz - pupu2);
    //1б



    return 0;
}