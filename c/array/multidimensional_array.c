/* 多维数组 */
#include <stdio.h>

void main(){
	/* 初始化数组 */
	int a[5][2] = { { 0, 0 }, { 1, 2 }, { 2, 4 }, { 3, 6 }, { 4, 8 } };
	
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			/* 访问数组 */
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	system("pause");
}
