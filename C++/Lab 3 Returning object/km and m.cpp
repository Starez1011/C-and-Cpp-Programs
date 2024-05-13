#include <iostream>
#include <conio.h>
using namespace std;

class Distance{
	int a,b;
	public:
		void getInfo();
		void displayInfo();
		Distance add(Distance,Distance);
};
void Distance::getInfo(){
	cout<<"Enter Distance in km and m: "<<endl;
	cin>>a>>b;
}
void Distance::displayInfo(){
	cout<<"The Distance is: "<<a<<" kilometers and "<<b<<" meters"<<endl;
}
Distance Distance::add(Distance d1,Distance d2){
	Distance d3;
	d3.b=d1.b+d2.b;
	d3.a=d3.b/1000;
	d3.b=d3.b%1000;
	d3.a=d3.a+d1.a+d2.a;
	return d3;
}
int main(){
	Distance l1,l2,l3;
	l1.getInfo();
	l2.getInfo();
	l1.displayInfo();
	l2.displayInfo();
	l3=l2.add(l1,l2);
	cout<<"After addition: "<<endl;
	l3.displayInfo();
	getch();
	return 0;
}
