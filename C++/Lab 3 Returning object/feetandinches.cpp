#include <iostream>
#include <conio.h>
using namespace std;

class Height{
	int feet,inches;
	public:
		void getInfo();
		void displayInfo();
		Height add(Height,Height);
};
void Height::getInfo(){
	cout<<"Enter Height: "<<endl;
	cin>>feet>>inches;
}
void Height::displayInfo(){
	cout<<"Height is: "<<feet<<"feet and "<<inches<<"inches"<<endl;
}
Height Height::add(Height r1,Height r2){
	Height r3;
	r3.inches=r1.inches+r2.inches;
	r3.feet=r3.inches/12;
	r3.inches=r3.inches%12;
	r3.feet=r3.feet+r1.feet+r2.feet;
	return r3;
}
int main(){
	Height e1,e2,e3;
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
