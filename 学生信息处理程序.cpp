#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
private:
	string name; // 在此处补充你的代码
	int age;
	int id;
	double average;
	int score[4];
public:
	void input(){
		string str; 
		string sub[7];
		int j=0;
		int start=0;
		getline(cin,str);

		for(int i=0;i<str.size();i++){
			if(str[i]==','){
				sub[j]=str.substr(start,i-start); //取子串 
				j++;
				start=i+1;
			}
		}
		sub[j]=str.substr(start,str.size());
		
		name=sub[0];
		stringstream s1;
		s1<<sub[1];
		s1>>age;
		
		stringstream s2;
		s2<<sub[2];	
		s2>>id;
		
		for(int i=3;i<7;i++){
			stringstream s3;
			int mark;
			s3<<sub[i];
			s3>>mark;
			score[i-3]=mark;
		}
	}
	void calculate(){
		double sum=0;
		for(int i=0;i<4;i++){
			sum+=score[i];
		}
		average=sum/4;
	}
	void output(){
		cout<<name<<","<<age<<","<<id<<","<<average<<endl;
	}
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
	return 0;
}
