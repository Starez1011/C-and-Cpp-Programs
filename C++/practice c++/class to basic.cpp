#include <iostream>
#include <conio.h>
using namespace std;

class Height{
	int feet;
	float meters,inches;
	public:
		Height(int ft,float in){
			feet=ft;
			inches=in;
		}
		void display(){
			cout<<"Distance: "<<feet<<" "<<inches<<endl;
		}
		operator float(){
			return((feet+(inches/12))/3.28);
		}
};
int main(){
	Height H(29023,0.1728);
	H.display();
	float a=H;
	cout<<"Meters: "<<a<<endl;
	getch();
	return 0;
}
