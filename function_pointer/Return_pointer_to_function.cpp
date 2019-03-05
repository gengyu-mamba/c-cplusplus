/* 返回指向函数的指针：
using F = int(int*, int);
using PF = int(*)(int*, int);

1、PF f1(int);
2、F *f2(int);
3、int(*f1(int))(int*, int); */

#include <iostream>
using namespace std;

typedef int(*pf)(int v1, int v2);

int max(int v1, int v2){
	return v1 > v2 ? v1 : v2;
}

int min(int v1, int v2){
	return v1 < v2 ? v1 : v2;
}

pf choice(int v){
	if (v == 1){
		return max;
	}
	else if (v == 2)
	{
		return min;
	}
}

int main()
{
	pf pmax = choice(1);
	pf pmin = choice(2);
	int v1 = 1, v2 = 2;
	cout << "Max is : " << pmax(v1, v2) << endl;
	cout << "Min is : " << pmin(v1, v2) << endl;
	system("pause");
	return 0;
}