#include <iostream>
#include <conio.h>
using namespace std;
class Complex{
	int a,b;
	public:
		void getInfo();
		void displayInfo();
};
void Complex::getInfo(){
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	displayInfo();
}
void Complex::displayInfo(){
	cout<<"The complex number is: "<<a<<"+i"<<b;
}
int main(){
	Complex c;
	c.getInfo();
	getch();
	return 0;
}
