#include <stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.3lf\n", (a+b+c)/3.0);
	return 0;
} 

// 三个数求平均值 保留三位小数 
