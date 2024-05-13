#include <iostream>
#include <conio.h>
#define PIE 3.14
using namespace std;
class Circle{
	int r;
	public:
		void getArea();
		void displayArea();
		void displayCircum();
};
void Circle::getArea(){
	cout<<"Enter radius:"<<endl;
	cin>>r;
}
void Circle::displayArea(){
	cout<<"The Area is: "<<(PIE*r*r)<<endl;
}
void Circle::displayCircum(){
	cout<<"The Circumference is: "<<2*PIE*r<<endl;
}
int main(){
	Circle C;
	C.getArea();
	C.displayArea();
	C.displayCircum();
	getch();
	return 0;
}
