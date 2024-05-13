#include <iostream>
#include <conio.h>
using namespace std;

class Polygon{
	protected:
	int x,y;
	public:
		void setdata(int c,int d){
			x=c;
			y=d;
		}
		virtual void show(){
			cout<<"Area: "<<x*y*2<<endl;
		}
};
class Rectangle:public Polygon{
	public:
		
		void show(){
			cout<<"Area: "<<x*y<<endl;
		}
};
class Triangle:public Polygon{
	public:
		void show(){
			cout<<"Area: "<<0.5*x*y<<endl;
		}
};
int main(){
	Polygon *p,p1;
	p=&p1;
	p->setdata(10,20);
	p->show();
	Rectangle r;
	p=&r;
	p->setdata(10,20);
	p->show();
	Triangle t;
	p=&t;
	p->setdata(10,20);
	p->show();
	getch();
	return 0;
}
