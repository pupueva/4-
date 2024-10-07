#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	int n = 18, k = 24;
	printf("—ейчас %d чаcов %d минут и 00 секунд\n",n,k);
	printf("—ейчас идет %d минута суток\n", n*60 + 60-k);
	printf("до полуночи осталось %d часов и %d минут\n",24-n,60-k);
	printf("с 8:00 прошло %d секунд\n",n*60*60-8*60*60+k*60);
	printf("текущий час %d/24 суток и текуща€ минута %d/60 часа\n",n,k);
	printf("                                                                       \n");
	printf("                                                                       \n");
	
	
}