#include <stdio.h>
int main()
{
	int n, i;
	double sum = 0;
	scanf("%d", &n);
	for( i=1; i<=n; i++ )
	{
		sum = sum + i;
	}
	printf("%.0lf\n", sum);
	return 0;
}

// 连续求和 
