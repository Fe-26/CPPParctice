#include <iostream>
using namespace std;
class A {
public:
	int val;
	// 在此处补充你的代码
	A(int val=123):val(val){}
	A &GetObj(){
		return *this;
	}
	A &operator=(const A &a){
		this->val=a.val;
		return *this;
	}
	A &operator=(int a){
		this->val=a;
		return *this;
	}
};
int main()
{
	int m,n;
	A a;
	cout << a.val << endl;
	while(cin >> m >> n) {
		a.GetObj() = m;
		cout << a.val << endl;
		a.GetObj() = A(n);
		cout << a.val<< endl;
	}
	return 0;
}
