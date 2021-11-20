#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

class Complex {
private:
	double r, i;
public:
	void Print() {
		cout << r << "+" << i << "i" << endl;
	}
	// 在此处补充你的代码
	Complex& operator=(const string str) {
		string a, b;
		int j = 1;
		do{
			a = str.substr(0, j);
			b = str.substr(j + 1, str.size() - j - 2);
		} while (str[j] != '+');

		r = atoi(a.c_str());
		i = atoi(b.c_str());

		return *this;
	}
};
int main() {
	Complex a;
	a = "3+4i"; a.Print();
	a = "5+6i"; a.Print();
	return 0;
}
