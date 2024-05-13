#include <iostream>
#include <conio.h>

using namespace std;
class Rational{
	int num,den;
	public:
		void getRational();
		void displayRational();
		void convert();
		void invert();
};
void Rational::getRational(){
	cout<<"Enter numbers:"<<endl;
	cin>>num>>den;
}
void Rational::displayRational(){
	cout<<"The Rational number is: "<<num<<"/"<<den<<endl;
}
void Rational::convert(){
	cout<<"The Real number is: "<<((num*1.0)/den)<<endl;
}
void Rational::invert(){
	int temp;
	temp=num;
	num=den;
	den=temp;
}
int main(){
	Rational R;
	R.getRational();
	R.displayRational();
	R.convert();
	R.invert();
	R.displayRational();
	R.convert();
	getch();
	return 0;
}
