#include <iostream>
#include <conio.h>
using namespace std;
class Distance{
	int a,b;
	public:
		Distance(){
			a=0;
			b=0;
		}
		Distance(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The Distance is: "<<a<<" km and "<<b<<" m "<<endl;
		}
		void add(Distance,Distance);
};
void Distance::add(Distance d1,Distance d2){
	b=d1.b+d2.b;
	a=b/1000;
	b=b%1000;
	a=a+d1.a+d2.a;
	display();
}
int main(){
	Distance d1(2,559),d2(4,869);
	d1.display();
	d2.display();
	cout<<"After add: "<<endl;
	d1.add(d1,d2);
	getch();
	return 0;
}
