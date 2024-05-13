#include <iostream>
#include <conio.h>
using namespace std;
class Time{
	int h,m;
	public:
		Time(){
			h=0;
			m=0;
		}
		Time(int x,int y){
			h=x;
			m=y;
		}
		void display(){
			cout<<"Time is: "<<h<<"hrs and "<<m<<"mins"<<endl;
		}
		friend Time operator + (Time t1,Time t2);
};
Time operator +(Time t1,Time t2){
	Time t3;
	t3.m=t1.m+t2.m;
	t3.h=t3.m/60;
	t3.m=t3.m%60;
	t3.h=t3.h+t1.h+t2.h;
	return t3;
}
int main(){
	Time t1(2,30),t2(3,50),t3;
	t1.display();
	t2.display();
	t3=t1+t2;
	t3.display();
	getch();
	return 0;
}
