#include <iostream>
#include <conio.h>
using namespace std;
class Time{
	int h,m,s;
	public:
		Time(){
			h=0;
			m=0;
			s=0;
		}
		Time(int x,int y,int z){
			h=x;
			m=y;
			s=z;
		}
		void display(){
			cout<<"The time is: "<<h<<" hrs "<<m<<" mins "<<s<<" sec "<<endl;
		}
		friend Time add(Time,Time);
};
Time add(Time t1,Time t2){
	Time t3;
	t3.s=t1.s+t2.s;
	t3.m=t3.s/60;
	t3.s=t3.s%60;
	t3.m=t3.m+t1.m+t2.m;
	t3.h=t3.m/60;
	t3.m=t3.m%60;
	t3.h=t3.h+t1.h+t2.h;
	return t3;
}
int main(){
	Time t1(2,33,55),t2(3,40,50),t3;
	t1.display();
	t2.display();
	cout<<"After Addition: "<<endl;
	t3=add(t1,t2);
	t3.display();
	getch();
	return 0;
}
