#define CRT_NO_SECURE_DEPRECATE
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846

#include <locale.h>
#include <locale.h> 
#include <stdlib.h>
#include <math.h>



double pupu(double xx, double yy)
{
	const double d=1.0;
	double xx;
	double yy;

	double numer = pow(cos(yy), 3) + pow(2, xx) * d;

	double domin = exp(yy) + log(pow(sin(xx), 2) + 7.4);
	double resultxy = numer / domin;



}
int main()
{
	//������� 1
	setlocale(LC_CTYPE, "RUS");

	float gr;
	float result;

	printf("�������� ��������:\n");
	scanf_s("%f", &gr);

	result = sin((gr * M_PI) / 180);

	printf("��������� ���������� sin %.1f:\n %.6f", gr, result);

	
	//2 ������� 
	// �������� x=2.7    y=1.7576
	float x, y, b, a, t = -6;
	printf("������� x \n");
	scanf_s("%f", &x);
	a = log(x);
	b = sqrt(pow(x, 2) + pow(t, 2));
	y = pow(fabs(a - b * x), (float)1 / 5);
	printf("y ����� %.4f", y);

	//��
	// �������� 0.000071    4       -0.09489
    // �������� 230000      2.7     -0.654889

	float x, y, f;
	printf("������� x \n");
	scanf_s("%f", &x);
	printf("������� y \n");
	scanf_s("%f", &y);
	f = (sqrt(pow(2 + y, 2) + pow((sin(y + 5)), (float)1 / 7))) / (log(x + 1) - pow(y, 3));
	printf("������� ����� %+.6f", f);

	return 0;
}