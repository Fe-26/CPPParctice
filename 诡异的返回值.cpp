#include <iostream>
using namespace std;

int &getElement(int * a, int i) //���ص���a[i]������
                                //�ڴ˴�������Ĵ���
{
	return a[i];
}
int main()
{
	int a[] = {1,2,3};
	getElement(a,1) = 10; //�൱�ڶԷ��ص�a[i]���ý��и�ֵ 
	cout << a[1] ;
	return 0;
}
