#include <iostream>
#include <conio.h>
using namespace std;
class Test{
	static int count;
	public:
		void getInfo();
		void displayInfo();
};
int Test::count;
void Test::getInfo(){
	count++;
}
void Test::displayInfo(){
	cout<<"Count= "<<count<<endl;
}
int main(){
	Test t1,t2,t3;
	t1.displayInfo();
	t2.displayInfo();
	t3.displayInfo();
	cout<<"After data reading: "<<endl;
	t1.getInfo();
	t2.getInfo();
	t3.getInfo();
	
	t1.displayInfo();
	t2.displayInfo();
	t3.displayInfo();
	getch();
	return 0;
}
