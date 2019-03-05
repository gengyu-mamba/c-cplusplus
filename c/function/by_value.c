/*
向函数传递参数的传值调用方法，把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数不会影响实际参数。
*/

#include <stdio.h>

int swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}

void main()
{
	int a = 200;
	int b = 300;

	printf("交换前,a的值： %d\n", a);
	printf("交换前,b的值： %d\n", b);

	swap(a, b);

	printf("交换后,a的值： %d\n", a);
	printf("交换后,b的值： %d\n", b);
	system("pause");
}
