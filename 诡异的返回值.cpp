#include <iostream>
using namespace std;

int &getElement(int * a, int i) //返回的是a[i]的引用
                                //在此处补充你的代码
{
	return a[i];
}
int main()
{
	int a[] = {1,2,3};
	getElement(a,1) = 10; //相当于对返回的a[i]引用进行赋值 
	cout << a[1] ;
	return 0;
}
