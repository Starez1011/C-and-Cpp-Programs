#include <iostream>
#include <conio.h>
using namespace std;
class Rational{
	int x,y;
	public:
		Rational(){
			x=0;
			y=0;
		}
		Rational(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"Rational number is: "<<x<<"/"<<y<<endl;
		}
		Rational operator +(Rational r1){
			Rational r;
			r.x=x*r1.y+y*r1.x;
			r.y=y*r1.y;
			return r;
		}
};
int main(){
	Rational r1(8,4),r2(8,2),r3;
	r1.display();
	r2.display();
	r3=r1+r2;
	cout<<"After Addition:"<<endl;
	r3.display();
	getch();
	return 0;
}
