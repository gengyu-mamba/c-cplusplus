/* 函数指针形参： */
#include <iostream>
using namespace std;

int lengthCompare(const string& str1, const string& str2){
	return str1.size() - str2.size();
}

typedef int (*compareFunction)(const string&, const string&);

int cmp(const string& str1, const string& str2, compareFunction compare){
	int answer = compare(str1, str2);
	return answer;
}

int main()
{
	string str1 = "program";
	string str2 = "beauty";
	int ans = cmp(str1, str2, (compareFunction)lengthCompare);
	printf("比对结果为%d\n", ans);
	system("pause");
	return 0;
}