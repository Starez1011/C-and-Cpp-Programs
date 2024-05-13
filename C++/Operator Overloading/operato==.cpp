#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Name{
	char a[50];
	public:
		Name(){
			strcpy(a," ");
		}
		Name(char *n){
			strcpy(a,n);
		}
		void display(){
			cout<<"String is: "<<a<<endl;
		}
		friend void operator ==(Name s1,Name s2);
};
void operator ==(Name s1,Name s2){
	if(strcmp(s1.a,s2.a)==0){
		cout<<"Same String"<<endl;
	}
	else{
		cout<<"Different String"<<endl;
	}
}
int main(){
	Name s1("Ram"),s2("Hari");
	s1.display();
	s2.display();
	cout<<"After compare:"<<endl;
	s1==s2;
	getch();
	return 0;
}
