#include <iostream>
#include <conio.h>
using namespace std;
class Complex{
	int a,b;
	public:
		Complex(){
			a=0;
			b=0;
		}
		Complex(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The complex number is: "<<a<<"+i"<<b<<endl;
		}
		void add(Complex,Complex);
};
void Complex::add(Complex c1,Complex c2){
	a=c1.a+c2.a;
	b=c1.b+c2.b;
	display();
}
int main(){
	Complex c1(5,7),c2(7,9),c3;
	c1.display();
	c2.display();
	cout<<"After addition: "<<endl;
	c1.add(c1,c2);
	getch();
	return 0;
}
