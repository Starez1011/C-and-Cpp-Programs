#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
class Point{
	int x,y,z;
	public:
		void getinfo();
		void displayinfo();
		void distance();
};
void Point::getinfo(){
	cout<<"Enter x,y,z coordinates:"<<endl;
	cin>>x>>y>>z;
}
void Point::displayinfo(){
	cout<<"The coordinates are: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
void Point::distance(){
	cout<<"The distance from origin to point is: "<<sqrt(x*x+y*y+z*z)<<endl;
}
int main(){
	Point p;
	p.getinfo();
	p.displayinfo();
	p.distance();
	getch();
	return 0;
}
