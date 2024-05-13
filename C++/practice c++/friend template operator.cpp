#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
class Vector{
	T x,y,z;
	public:
		Vector(){
			x=0;
			y=0;
			z=0;
		}
		Vector(T a,T b, T c){
			x=a;
			y=b;
			z=c;
		}
		void display(){
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		template <class A>
		friend void operator*(Vector <A> V1,Vector <A> V2);
};
template <class T>
void operator *(Vector <T> V1,Vector <T> V2){
	T p=V1.x*V2.x+V1.y*V2.y+V1.z*V2.z;
	cout<<"Product: "<<p<<endl;
}
int main(){
	Vector <int> V1(1,2,3),V2(4,5,6);
	V1.display();
	V2.display();
	V1*V2;
	getch();
	return 0;
}
