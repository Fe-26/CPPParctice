#include <iostream>
using namespace std;

int main()
{
	int * a[] = {
	nullptr,
	(int*)(initializer_list<int>({0,0,0,0,0,0}).begin()),
	(int*)(initializer_list<int>({0,0,0,0,0,0}).begin()),
	(int*)(initializer_list<int>({0,0,0,0,0,0}).begin())
    // �ڴ˴�������Ĵ���
};
	
	*a[2] = 123;
	a[3][5] = 456;
	if(! a[0] ) {
		cout << * a[2] << "," << a[3][5];
	}
	return 0;
}

//��VS�����123��456 
