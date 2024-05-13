#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Bank{
	char name[50];
	long int number;
	int amount;
	public:
		void opening_account();
		void deposit();
		void withdraw();
		void display();
};
void Bank::opening_account(){
	cout<<"Enter name,acc no. amount: "<<endl;
	cin>>name;
	fflush(stdin);
	cin>>number>>amount;
}
void Bank::deposit(){
	int a;
	cout<<"Enter deposit amount: "<<endl;
	cin>>a;
	amount=amount+a;
}
void Bank::withdraw(){
	int b;
	cout<<"Enter withdrawal amount: "<<endl;
	cin>>b;
	if(amount>b){
		amount=amount-b;
	}
	else{
		cout<<"Insufficient Amount."<<endl;
	}
	
}
void Bank::display(){
	cout<<"The details: "<<endl;
	cout<<"Name: "<<name<<endl<<"Account number: "<<number<<endl<<"Balance: "<<amount<<endl;
}
int main(){
	Bank B[10];
	int choice,n;
	while(1){
		cout<<"\n******Bank Account Management******"<<endl;
		cout<<"\n1.Open Account \n2.Display Info \n3.Deposit \n4.Withdraw \n5.Exit"<<endl;	
		cout<<"Enter your choice 1 to 5: "<<endl;
		cin>>choice;
		cout<<"Enter your ID:"<<endl;
		cin>>n;
		switch(choice){
			case 1: B[n].opening_account();
				break;
			case 2: B[n].display();
				break;
			case 3: B[n].deposit();
				break;
			case 4: B[n].withdraw();
				break;
			case 5: exit(0);
				break;
			default: cout<<"ERROR!!! Try Again"<<endl;
		}
	}
	getch();
	return 0;
}
