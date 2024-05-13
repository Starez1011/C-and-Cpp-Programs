#include <iostream>
#include <conio.h>
using namespace std;

class Height{
	int feet;
	float inches;
	public:
		Height(float meters){
			float ft=meters*3.28;
			feet=(int)ft;
			inches=(ft-feet)*12;
		}
		void display(){
			cout<<"Distance: "<<feet<<" "<<inches<<endl;
		}
};
int main(){
	Height H=8848.48;
	H.display();
	getch();
	return 0;
}
