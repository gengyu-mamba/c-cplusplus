/*
向函数传递参数的引用调用方法，把参数的地址复制给函数的形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
*/

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

void main()
{
	int a = 200;
	int b = 300;

	printf("交换前,a的值： %d\n", a);
	printf("交换前,b的值： %d\n", b);

	swap(&a, &b);

	printf("交换后,a的值： %d\n", a);
	printf("交换后,b的值： %d\n", b);
	system("pause");
}
