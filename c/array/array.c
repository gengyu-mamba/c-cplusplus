/* 数组 */
#include <stdio.h>

void main(){
	/* 声明数组 */
	int a[10];
	
	for (int i = 0; i < 10; ++i)
	{
		/* 数组赋值 */
		a[i] = i + 100;
	}
	for (int j = 0; j < 10; ++j)
	{
		/* 访问数组 */
		printf("a[%d] = %d\n", j, a[j]);
	}
	system("pause");
}
