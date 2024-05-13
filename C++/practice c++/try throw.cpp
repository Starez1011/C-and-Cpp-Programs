#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float divisor,dividend,quotient;
	char input[]="Please enter positive value";
	try{
		cout<<"Enter number;"<<endl;
		cin>>dividend>>divisor;
		if(divisor==0){
			throw 0;
		}
		else if(divisor<0){
			throw input;
		}
	}
	catch(int x){
	cout<<"Zero not allowed:"<<endl;
	}
	catch(char *y){
		cout<<"Negative not allowed: "<<endl;
	}
	quotient=dividend/divisor;
	cout<<quotient<<endl;
	getch();
	return 0;
}
