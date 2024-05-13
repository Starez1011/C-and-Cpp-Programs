#include <iostream>
#include <conio.h>
using namespace std;
class Person{
	char name[50];
	int age;
	char gender;
	long int number;
	public:
		void getInfo();
		void displayInfo();
};
void Person::getInfo(){
	cout<<"Enter name:"<<endl;
	cin>>name;
	fflush(stdin);
	cout<<"Enter age:"<<endl;
	cin>>age;
	cout<<"Enter gender:"<<endl;
	cin>>gender;
	cout<<"Enter number:"<<endl;
	cin>>number;
}
void Person::displayInfo(){
	cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl<<"Number: "<<number<<endl;
}
int main(){
	Person p;
	p.getInfo();
	p.displayInfo();
	getch();
	return 0;
}
