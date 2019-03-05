/*
C、从文件中读取一个字符串
1、函数原型：
char *fgets(char *str, int n, FILE *fp)


2、功能说明：
从由fp指出的文件中读取n - 1个字符，并把它们存放到由str指出的字符数组中去，最后加上一个字符串结束符'\0'

3、参数说明
str : 接收字符串的内存地址，可以是数组名，也可以是指针。
n：指出要读取字符的个数
fp：这是个文件指针，指出要从中读取字符的文件

4、返回值
正常返回：返回字符串的内存地址，即str的值
异常返回：返回NULL，此时应当用feof()或ferror()函数来判断是读取到了文件尾还是发生了错误
*/
#include <stdio.h>

void main(){
	FILE *in;
	int ch;
	char str[12];

	if ((in = fopen("in.txt", "r")) == NULL){
		printf("the file in.txt can not be opened!\n");
		return;
	}
	fgets(str, 12, in);
	printf("%s\n", str);
	fclose(in);
	system("pause");
}