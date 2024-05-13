#include <iostream>
#include <conio.h>

using namespace std;
class Student{
	char name[50];
	int age;
	char add[50];
	public:
		void getInfo();
		void displayInfo();
};
void Student::getInfo(){
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter age: "<<endl;
	cin>>age;
	cout<<"Enter address: "<<endl;
	cin>>add;
}
void Student::displayInfo(){
	cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<add<<endl;
}
int main(){
	int i,n;
	Student s[100];
	cout<<"Enter no. of students: "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		s[i].getInfo();
	}
	for(i=0;i<n;i++){
		s[i].displayInfo();
	}
	getch();
	return 0;
}
