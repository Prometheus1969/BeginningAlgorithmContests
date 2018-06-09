#include <stdio.h>
int main()
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if( a>b )		// 执行结束后 a<=b 
	{
		t = a;
		a = b;
		b = t;	
	}
	if( a>c )		// 执行结束后 a<=c, 且仍 a<=b 
	{
		t = a;
		a = c;
		c = t;
	}
	if( b>c )
	{
		t = b;
		b = c;
		c = t; 
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

// 三个数从小到大排序  精简做法 
