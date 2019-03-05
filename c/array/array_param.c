/* C 传递数组给函数 */
#include <stdio.h>

//方式1
void myFunction1(int *param)
{
}

//方式2
void myFunction2(int param[10])
{
}

//方式3
void myFunction3(int param[])
{
}

double getAverage(int arr[], int size)
{
	double avg;
	double sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = sum / size;
	return avg;
}


void main(){
	int balance[5] = { 1000, 2, 3, 17, 50 };
	double avg;
	int size = sizeof(balance) / sizeof(balance[0]);
	avg = getAverage(balance, size);
	printf("平均值为 %f\n",avg);
	system("pause");
}
