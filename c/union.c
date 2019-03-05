/* 
共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。
共用体占用的内存应足够存储共用体中最大的成员。
*/

#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;
	data.i = 10;
	printf("data.i: %d\n", data.i);
	data.f = 220.5;
	printf("data.f: %f\n", data.f);
	strcpy(data.str, "C programing");
	printf("data.str: %s\n", data.str);
	system("pause");
	return 0;
}