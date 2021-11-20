#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// 在此处补充你的代码
	Sample(int v=0):v(v){} 

	Sample (const Sample &a){
		this->v=a.v+2;
	}

};
void PrintAndDouble(Sample o) //形参引发一次拷贝构造函数 
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);
	Sample b = a;
	PrintAndDouble(b);
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}
