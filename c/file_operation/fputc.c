/*
B、写一个字符到文件中去
1、函数原型：
int fputc(int ch, FILE *fp);

2、功能说明：
把ch中的字符写入由fp指出的文件中去

3、参数说明：
ch：是一个整型变量，内存要写到文件中的字符（C语言中整型量和字符量可以通用）。
fp：这是个文件指针，指出要在其中写入字符的文件。

4、返回值：
正常返回：要写入的字符的代码
异常返回：返回EOF

5、实例：
将一个文件的内容复制到另一个文件中去
*/
#include <stdio.h>

void main(){
	FILE *in, *out;
	int ch;

	if ((in = fopen("in.txt", "r")) == NULL){
		printf("the file in.txt can not be opened!\n");
		return;
	}
	if ((out = fopen("out.txt", "w")) == NULL){
		printf("the file out.txt can not be opened!\n");
		return;
	}
	ch = fgetc(in);
	while (ch != EOF){
		fputc(ch, out);
		ch = fgetc(in);
	}
	fclose(in);
	fclose(out);
	system("pause");
}