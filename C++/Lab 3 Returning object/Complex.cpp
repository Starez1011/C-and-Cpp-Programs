#include <iostream>
#include <conio.h>
using namespace std;
class Complex{
	int a,b;
	public:
		void getInfo();
		void displayInfo();
		Complex add(Complex,Complex);
}; 
void Complex::getInfo(){
	cout<<"Enter numbers: "<<endl;
	cin>>a>>b;
}
void Complex::displayInfo(){
	cout<<"The complex number is: "<<a<<"+i"<<b<<endl;
}
Complex Complex::add(Complex c1,Complex c2){
	Complex c3;
	c3.a=c1.a+c2.a;
	c3.b=c1.b+c2.b;
	return c3;
}
int main(){
	Complex c1,c2,c3;
	c1.getInfo();
	c2.getInfo();
	c1.displayInfo();
	c2.displayInfo();
	cout<<"After Addition: "<<endl;
	c3=c1.add(c1,c2);
	c3.displayInfo();
	getch();
	return 0;
}
