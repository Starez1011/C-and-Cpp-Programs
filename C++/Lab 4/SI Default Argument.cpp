#include <iostream>
#include <conio.h>
using namespace std;
float SI(float p, float r, float t=2){
	return((p*t*r)/100);
}
int main(){
	float s;
	s=SI(100,1);
	cout<<"The simple interest is: "<<s<<endl;
	return 0;
}
