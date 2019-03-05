#include <iostream>
using namespace std;

/* 值捕获 */
void fcn1(){
	size_t v1 = 42;
	auto f = [v1]{ return v1; };
	v1 = 0;
	auto j = f();	//j为42;f保存了我们创建它时v1的拷贝
	cout << j << endl;
}

/* 引用捕获 */
void fcn2(){
	size_t v1 = 42;
	auto f2 = [&v1]{ return v1; };
	v1 = 0;
	auto j = f2();	//j为0;f保存v1的引用，而非拷贝
	cout << j << endl;
}

/* 可变lambda */
/* 默认情况下，对于一个值被拷贝的变量,lambda不会改变其值。如果我们希望能改变一个被捕获的变量的值，就必须在参数列表首加上关键字mutable。 */
void fcn3(){
	size_t v1 = 42;
	auto f = [v1]() mutable { return ++v1; };
	v1 = 0;
	auto j = f();	//j为43
	cout << j << endl;
}

/* 一个引用捕获的变量是否可以修改依赖于此变量指向的是一个const类型还是一个非const类型 */
void fcn4(){
	size_t v1 = 42;
	auto f2 = [&v1]{ return ++v1; };
	v1 = 0;
	auto j = f2();
	cout << j << endl;
}

void fcn5(){
	size_t v1 = 42;
	size_t* const p = &v1;
	auto f = [p]() { return ++*p; };
	auto j = f();
	cout << v1 << " " << j << endl; // print 43 43
	v1 = 0;
	j = f();
	cout << v1 << " " << j << endl; // print 1 1
}

int main(){
	fcn1();
	fcn2();
	fcn3();
	fcn4();
	fcn5();
	system("pause");
	return 0;
}