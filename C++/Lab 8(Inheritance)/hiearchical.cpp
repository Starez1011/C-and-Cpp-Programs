#include <iostream>
#include <conio.h>
using namespace std;
class Alpha{
	protected:
		int m;
	public:
		Alpha(){
			m=0;
		}
		Alpha(int x){
			m=x;
		}
		void display(){
			cout<<"m: "<<m<<endl;
		}
};
class Beta{
	protected:
		float n;
	public:
		Beta(){
			n=0;
		}
		Beta(float y){
			n=y;
		}
		void display(){
			cout<<"n: "<<n<<endl;
		}
};
class Gamma:public Alpha,public Beta{
	int p;
	public:
		Gamma(int x,float y,int z):Alpha(x),Beta(y){
			p=z;
		}
		void display(){
			cout<<"p: "<<p<<endl;
		}
};
int main(){
	Gamma G(9,8.8,7);
	G.Alpha::display();
	G.Beta::display();
	G.display();
	getch();
	return 0;
}
