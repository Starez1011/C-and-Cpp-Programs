#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Person{
	protected:
		char name[50];
		int age;
	public:
		Person(){
			strcpy(name," ");
			age=0;
		}
		Person(char *n,int a){
			strcpy(name,n);
			age=a;
		}
		void display(){
			cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
		}
};
class Teacher:public Person{
	char department[50];
	public:
		Teacher(char *n,int a,char *d):Person(n,a){
			strcpy(department,d);
		}
		void display(){
			cout<<"Department: "<<department<<endl;
		}
};
class Student:public Person{
	char faculty[50];
	public:
		Student(char *n,int a,char *f):Person(n,a){
			strcpy(faculty,f);
		}
		void display(){
			cout<<"Faculty: "<<faculty<<endl;
		}
};
int main(){
	Teacher T("Ram",26,"IT");
	Student S("Hari",20,"SE");
	T.Person::display();
	T.display();
	S.Person::display();
	S.display();
	getch();
	return 0;
}
