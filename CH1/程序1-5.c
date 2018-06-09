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

// 输入底面半径r和高h，输出圆柱体表面积，保留三位小数 
