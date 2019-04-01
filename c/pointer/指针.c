#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func1() {
	int var1;
	char var2[10];
	printf("var1 变量的地址: %x\n", &var1);
	printf("var2 变量的地址: %x\n", &var2);
}

void func2() {
	int var = 20;
	int *ip;
	ip = &var;
	printf("Address of var variable:%x\n", &var);
	printf("Address stored in ip variable: %x\n", ip);
	printf("Value of *ip variable: %d\n", *ip);
}

void func3() {
	int *ptr = NULL;
	printf("ptr 的值是 %x\n", ptr);
}

int main() {
	func1();
	func2();
	func3();
	system("pause");
	return 0;
}