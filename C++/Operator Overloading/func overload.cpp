#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Area1{
	public:
		void Area(float l,float b){
			cout<<"Area of rectangle: "<<l*b<<endl;
		}
		void Area(float a,float b,float c){
			float s,x;
			s=(a+b+c)/2;
			x=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"Area of triangle: "<<x<<endl;
		}
};
int main(){
	Area1 A;
	float a,b,c,l;
	cout<<"Enter l,b: "<<endl;
	cin>>l>>b;
	A.Area(l,b);
	cout<<"Enter a,b,c: "<<endl;
	cin>>a>>b>>c;
	A.Area(a,b,c);
	getch();
	return 0;
}
