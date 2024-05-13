#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Polar{
	float radius,angle;
	public:
		Polar(){
			radius=0;
			angle=0;
		}
		Polar(float r,float a){
			radius=r;
			angle=a;
		}
		void display(){
			cout<<"Polar ("<<radius<<","<<angle<<")"<<endl;
		}
};
class Rectangle{
	float x,y;
	public:
		Rectangle(){
			x=0;
			y=0;
		}
		Rectangle(float r,float a){
			x=r;
			y=a;
		}
		void display(){
			cout<<"Rectangle ("<<x<<","<<y<<")"<<endl;
		}
		operator Polar(){
			float R=sqrt(pow(x,2)+pow(y,2));
			float A=atan(y/x);
			return Polar(R,A);
		}
};
int main(){
	Polar P;
	Rectangle R(10,20);
	R.display();
	P=R;
	P.display();
	getch();
	return 0;
	
}
