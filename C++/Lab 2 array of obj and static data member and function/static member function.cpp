#include <iostream>
#include <conio.h>
using namespace std;
class Test{
	static int count;
	int number;
	public:
		void getInfo();
		void displayInfo();
		static void showcount();
};
int Test::count;
void Test::getInfo(){
	number=count++;
}
void Test::displayInfo(){
	cout<<"number ="<<number;
}
void Test::showcount(){
	cout<<"count= "<<count<<endl;
}
int main(){
	Test t1,t2;
	t1.getInfo();
	t2.getInfo();
	Test::showcount();
	Test t3;
	t3.getInfo();
	Test::showcount();
	t1.displayInfo();
	t2.displayInfo();
	t3.displayInfo();
	getch();
	return 0;
}
