#include <stdio.h>

const int MAX = 3;

void func1() {
	int  var[] = { 10, 100, 200 };
	int i, *ptr[3];

	for (i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i]; /* 赋值为整数的地址 */
	}
	for (i = 0; i < MAX; i++)
	{
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}
}

void func2() {
	char *names[] = { "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali" };
	int i = 0;
	for (i = 0; i < MAX; ++i)
	{
		printf("Value of names[%d] = %s\n", i, names[i]);
	}
}

int main()
{
	func1();
	func2();
	system("pause");
	return 0;
}