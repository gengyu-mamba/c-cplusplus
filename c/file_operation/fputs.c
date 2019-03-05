/*
D、写一个字符串到文件中去
1、函数原型
int fputs(char *str, FILE *fp)

2、功能说明
把由str指出的字符串写入到fp所指的文件中去

3、参数说明
str：指出要写到文件中的字符串
fp：这是个文件指针，指出字符串要写入其中的文件

4、返回值
正常返回：写入文件的字符个数，即字符串的长度
异常返回：返回NULL，此时应当用feof()或ferror()函数来判断是读取到了文件尾还是发生了错误
*/

#include <stdio.h>

void main(){
	FILE *fp1, *fp2;
	char buffer[512];

	if ((fp1 = fopen("fp1.txt", "a")) == NULL){
		printf("the file fp1.txt can not be opened!\n");
		return;
	}
	if ((fp2 = fopen("fp2.txt", "r")) == NULL){
		printf("the file fp2.txt can not be opened!\n");
		return;
	}
	while (fgets(buffer, 512, fp1) != NULL){
		printf("%s\n", buffer);
	}
	while (fgets(buffer, 512, fp2) != NULL){
		fputs(buffer, fp1);
	}
	fclose(fp1);
	fclose(fp2);
	if ((fp1 = fopen("fp1.txt", "a")) == NULL){
		printf("the file fp1.txt can not be opened!\n");
		return;
	}
	while (fgets(buffer, 512, fp1) != NULL){
		printf("%s\n", buffer);
	}
	fclose(fp1);
	system("pause");
}
