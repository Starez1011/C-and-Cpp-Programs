#include <iostream>
#include <conio.h>
using namespace std;
class Box{
	float *p;
	public:
		Box(){
			p=new float[3];
		}
		void input(){
			cout<<"Enter l,b,h: "<<endl;
			cin>>*p>>*(p+1)>>*(p+2);
		}
		void calculate(){
			int a;
			a=(*p)*(*(p+1))*(*(p+2));
			cout<<"The volume is: "<<a<<endl;
		}
		~Box(){
			delete p;
			cout<<"Memory deleted"<<endl;
		}
};
int main(){
	{
	Box B;
	B.input();
	B.calculate();
	}
	getch();
	return 0;
}
