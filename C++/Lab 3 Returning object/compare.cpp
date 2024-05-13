#include <iostream>
#include <conio.h>
using namespace std;

class Number{
	int a,b;
	public:
		void getInfo();
		void displayInfo();
		void compare(Number,Number);
};
void Number::getInfo(){
	cout<<"Enter Number: "<<endl;
	cin>>a;
}
void Number::displayInfo(){
	cout<<"Number is: "<<a<<endl;
}
void Number::compare(Number r1,Number r2){
	if(r1.a>r2.a){
		cout<<"Greater number is: "<<r1.a<<endl;
	}
	else{
		cout<<"greater number is: "<<r2.a<<endl;
	}
}
int main(){
	Number e1,e2,e3;
	e1.getInfo();
	e2.getInfo();
	e1.displayInfo();
	e2.displayInfo();
	e3.compare(e1,e2);
	getch();
	return 0;
}
