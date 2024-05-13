#include <iostream>
#include <conio.h>
using namespace std;

class Memory{
	int mb,kb;
	double b;
	public:
		Memory(int x,int y,double z){
			mb=x;
			kb=y;
			b=z;
		}
		void display(){
			cout<<"Memory: "<<mb<<" megabytes "<<kb<<" kilobytes "<<b<<" bytes "<<endl;
		}
		operator double(){
			return(b+(kb*1024)+(mb*1024*1024));
		}
};
int main(){
	Memory M(1,38,177);
	M.display();
	double a=M;
	cout<<"Memory: "<<a<<endl;
	getch();
	return 0;
}
