#include <stdio.h>
#include <string.h>

/* C指针的算数运算 */
void func1() {
	const int MAX = 3;
	int var[] = { 10, 100, 200 };
	int i, *ptr;
	ptr = var;
	for (i = 0; i < MAX; i++)
	{
		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);
		ptr++;
	}
}

void func2() {
	const int MAX = 3;
	int var[] = { 10, 100, 200 };
	int i, *ptr;
	ptr = &var[MAX - 1];
	for (i = MAX; i > 0; i--)
	{
		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);
		ptr--;
	}
}

void func3() {
	const int MAX = 3;
	int var[] = { 10, 100, 200 };
	int i, *ptr;
	ptr = var;
	i = 0;
	while (ptr <= &var[MAX - 1])
	{
		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);
		ptr++;
		i++;
	}
}

int main() {
	func1();
	func2();
	func3();
	system("pause");
	return 0;
}