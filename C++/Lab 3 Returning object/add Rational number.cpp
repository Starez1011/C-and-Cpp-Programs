#include <iostream>
#include <conio.h>
using namespace std;

class Rational{
	int a,b;
	public:
		void getInfo();
		void displayInfo();
		Rational add(Rational,Rational);
};
void Rational::getInfo(){
	cout<<"Enter Rational Number: "<<endl;
	cin>>a>>b;
}
void Rational::displayInfo(){
	cout<<"Rational Number is: "<<a<<"/"<<b<<endl;
}
Rational Rational::add(Rational r1,Rational r2){
	Rational r3;
	r3.a=(r1.a*r2.b+r1.b*r2.a);
	r3.b=(r1.b*r2.b);
	return r3;
}
int main(){
	Rational e1,e2,e3;
	e1.getInfo();
	e2.getInfo();
	e1.displayInfo();
	e2.displayInfo();
	e3=e2.add(e1,e2);
	cout<<"After addition: "<<endl;
	e3.displayInfo();
	getch();
	return 0;
}
