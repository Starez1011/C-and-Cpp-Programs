#include <iostream>
#include <conio.h>
using namespace std;

class A{
	public:
		virtual ~A(){
			cout<<"Class A"<<endl;
		}
};
class B:public A{
	public:
		~B(){
			cout<<"Class B"<<endl;
		}
};
int main(){
	A *a;
	B b;
	a=&b;
	delete a;
	getch();
	return 0;
}
