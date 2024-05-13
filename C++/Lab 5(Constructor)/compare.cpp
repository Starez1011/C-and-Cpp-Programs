/*
WAP to compare two values of a class using constructor and by using friend function
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Compare{
	int a,b;
	public:
		Compare(){
			a=0;
			b=0;
		}
		Compare(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
		}
		friend void comp(Compare);
};
void comp(Compare c1){
	if(c1.a>c1.b){
		cout<<"Max is: "<<c1.a<<endl;
	}
	else{
		cout<<"Max is: "<<c1.b<<endl;
	}
}
int main(){
	Compare c1(7,9);
	c1.display();
	comp(c1);
	getch();
	return 0;
}

