#include <stdio.h>
#include <math.h>
int main()
{
	const double PI = acos(-1.0);
	double r, h, s1, s2, s;
	scanf("%lf%lf", &r, &h);
	s1 = PI*r*r;
	s2 = 2*PI*r*h;
	s = s1*2.0 + s2;
	printf("Area = %.3f\n", s);
	return 0;
}

// �������뾶r�͸�h�����Բ����������������λС�� 
