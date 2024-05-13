#include <iostream>
#include <conio.h>
using namespace std;
class Rational{
	int a,b;
	public:
		Rational(){
			a=0;
			b=0;
		}
		Rational(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The rational number is: "<<a<<"/"<<b<<endl;
		}
		void add(Rational,Rational);
};
void Rational::add(Rational r1,Rational r2){
	a=r1.a*r2.b+r1.b*r2.a;
	b=r1.b*r2.b;
	display();
}
int main(){
	Rational r1(6,3),r2(4,2);
	r1.display();
	r2.display();
	cout<<"After add: "<<endl;
	r1.add(r1,r2);
	getch();
	return 0;
}
