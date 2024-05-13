#include <iostream>
#include <conio.h>
using namespace std;
class Data{
	int a,b;
	public:
		Data(){
			a=0;
			b=0;
		}
		Data(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"a = "<<a<<endl<<" b = "<<b<<endl;
		}
		void swap(Data);
};
void Data::swap(Data d1){
	int temp;
	temp=d1.a;
	d1.a=d1.b;
	d1.b=temp;
	d1.display();
}
int main(){
	Data d1(5,7);
	d1.display();
	cout<<"After swap: "<<endl;
	d1.swap(d1);
	getch();
	return 0;
}
