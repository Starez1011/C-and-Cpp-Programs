#include <iostream>
#include <conio.h>
using namespace std;
void Sphere(float &a, float &v, float r){
	a=4*3.14*r*r;
	v=(4.0/3)*3.14*r*r*r;
}
int main(){
	float r,a,v;
	cout<<"Enter radius: "<<endl;
	cin>>r;
	Sphere(a,v,r);
	cout<<"The area is: "<<a<<" and volume is: "<<v<<endl;
	getch();
	return 0;
}
