#include <iostream>
#include <conio.h>
using namespace std;
 class Election{
 	public:
 	char name[50];
 	char location[50];
 	int age;
 		void get(){
 			cout<<"Enter 3"<<endl;
 			cin>>name>>location>>age;
		 }
		 void display(){
		 	cout<<"Name: "<<name<<endl<<"Location: "<<location<<endl<<"Age: "<<age<<endl;
		 }
 };
 int main(){
 	Election E[100];
 	int n;
 	cout<<"Enter no of people: "<<endl;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		E[i].get();
	 }
	 cout<<"Those who can vote: "<<endl;
	 for(int i=0;i<n;i++){
	 	if(E[i].age>=18){
	 		E[i].display();
		 }
		 else{
		 	cout<<"None is eligible."<<endl;
		 	break;
		 }
	 }
	 getch();
	 return 0;
 }
