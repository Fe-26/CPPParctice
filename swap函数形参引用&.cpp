#include <iostream>
using namespace std;
class A
{
	public:
	int x;
	int getX() { return x; }	
};
void swap(A &a,A &b) //这里必须得用&，如果没有，则无法进行交换。类如此，其他数据类型也是如此 
					//在此处补充你的代码 
{
	int  tmp = a.x;
	a.x = b.x;
	b.x = tmp;
}
int main()
{
	A a,b;
	a.x = 3;
	b.x = 5;
	swap(a,b);
	cout << a.getX() << "," << b.getX();
	return 0;
}
