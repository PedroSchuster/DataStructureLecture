#include <iostream>
using namespace std;
# ifndef MYCLASS_H
# define MYCLASS_H
class MyClass {
private:
	int a;
	int b;
public:
	MyClass(int A, int B){
		a = A;
		b = B;
	}
	~MyClass(){
		cout << "Destruiu" << endl;
	}
	void foo() {
		cout << a + b << endl;
	};

};
# endif