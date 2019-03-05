/*
# 文件的关闭
函数原型：
int fclose(FILE * fp);

功能说明：
关闭由fp指出的文件。
参数说明：
fp : 一个已打开文件的文件指针
	 返回值：
	 正常返回：0
	 异常返回：EOF，表示文件在关闭时发生错误
*/
#include <stdio.h>

void main(){
	FILE* fp;
	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		printf("the file can not be opened.\n");
	}
	else
	{
		fclose(fp);
	}
}
