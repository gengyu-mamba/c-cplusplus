#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

void main()
{
	int a = 200;
	int b = 300;
	int ret;
	ret = max(a, b);
	printf("max value is %d\n", ret);
	system("pause");
}
