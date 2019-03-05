/*
C 从函数返回数组

C语言不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针。
另外，C不支持在函数外返回局部变量的地址，除非定义局部变量为static变量
*/
#include <stdio.h>

int *getRandom()
{
	static int r[10];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}
	return r;
}


void main()
{
	int *p;
	p = getRandom();
	for (int i = 0; i < 10; ++i)
	{
		printf("*(p + %d) = %d\n", i, *(p + i));
	}
	system("pause");
}
