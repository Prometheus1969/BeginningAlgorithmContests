#include <stdio.h>
int main()
{
	int m, n;
	int x, y;
	scanf("%d%d", &n, &m);
	x = (m - 2*n)/2;
	y = n - x;
	if( m%2==1 || x<0 || y<0 )
	{
		printf("No answer");
	}
	else
	{
		printf("%d %d\n", y, x);
	}
	return 0;
}

// ����ͬ������  ����n ��m�� xֻ����yֻ�� 
