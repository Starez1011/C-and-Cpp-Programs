#include <iostream>
#include <conio.h>
using namespace std;
class Time{
	int hour,min,sec;
	public:
		void getInfo();
		void displayInfo();
		Time add(Time,Time);
};
void Time::getInfo(){
	cout<<"Enter time in hr,min and sec: "<<endl;
	cin>>hour>>min>>sec;
}
void Time::displayInfo(){
	cout<<"The Time is: "<<hour<<"hours "<<min<<"minutes and "<<sec<<"seconds."<<endl;
}
Time Time::add(Time t1,Time t2){
	Time t3;
	t3.sec=t1.sec+t2.sec;
	t3.min=t3.sec/60;
	t3.sec=t3.sec%60;
	t3.min=t3.min+t2.min+t1.min;
	t3.hour=t3.min/60;
	t3.min=t3.min%60;
	t3.hour=t3.hour+t2.hour+t1.hour;
	return t3;
}
int main(){
	Time s1,s2,s3;
	s1.getInfo();
	s2.getInfo();
	s1.displayInfo();
	s2.displayInfo();
	cout<<"After Addition: "<<endl;
	s3=s1.add(s1,s2);
	s3.displayInfo();
	getch();
	return 0;
}
