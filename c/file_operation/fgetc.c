/*
A.从文件中读取一个字符
1、函数原型：
int fgetc(FILE *fp);


2、功能说明：
从fp所指文件中读取一个字符

3、参数说明
fp：这是个文件指针，它指出要从中读取字符的文件

4、返回值
正常返回：返回读取字符的代码
异常返回：返回EOF
*/
#include <stdio.h>

void main(){
	FILE* fp; //定义文件类型指针
	int ch;

	if ((fp = fopen("test.txt", "r")) == NULL){
		printf("the file can not be opened!\n");
		return;
	}
	ch = fgetc(fp);
	while (ch != EOF){
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	system("pause");
}

