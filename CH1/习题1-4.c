#include <stdio.h>
#include <math.h>
int main()
{
	const double PI = acos(-1.0);
	int n;
	scanf("%d", &n);
	printf("%.2lf %.2lf\n", sin(n*PI/180.0), cos(n*PI/180.0));
	// 角度值需要转换为弧度值 
	return 0;
}

// 求 n度 的正弦 余弦 
