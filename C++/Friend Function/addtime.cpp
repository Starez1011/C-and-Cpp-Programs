#include <iostream>
#include <conio.h>
using namespace std;
class Time1;
class Time2{
	int h,m;
	public:
		void getInfo(){
			cout<<"Enter number: "<<endl;
			cin>>h>>m;
		}
		void displayInfo(){
			cout<<"The time is: "<<h<<"hrs and "<<m<<"mins"<<endl;
		}
		Time2 add(Time1 T1);
};
class Time1{
	int h,m;
	public:
		void getInfo(){
			cout<<"Enter number: "<<endl;
			cin>>h>>m;
		}
		void displayInfo(){
			cout<<"The time is: "<<h<<"hrs and "<<m<<"mins"<<endl;
		}
		friend Time2 Time2::add(Time1 T1);
};
Time2 Time2::add(Time1 T1){
	Time2 T2;
	T2.m=m+T1.m;
	T2.h=T2.m/60;
	T2.m=T2.m%60;
	T2.h=T2.h+h+T1.h;
	return T2;
}
int main(){
	Time2 T3,T2;
	Time1 T1;
	T3.getInfo();
	T3.displayInfo();
	T1.getInfo();
	T1.displayInfo();
	cout<<"After addition: "<<endl;
	T2=T3.add(T1);
	T2.displayInfo();
	getch();
	return 0;
}
