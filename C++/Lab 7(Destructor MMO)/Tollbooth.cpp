#include <iostream>
#include <conio.h>

using namespace std;
class Tollbooth{
	int car=0,money=0;
	public:
		void paying_car(){
			money=money+5;
			car++;
		}
		void no_paying_car(){
			car++;
		}
		void display(){
			cout<<"Total Cars: "<<car<<endl<<"Total cash: "<<money<<endl;
		}
};
int main(){
	Tollbooth T;
	int choice;
	while(1){
		cout<<"***Tollbooth***"<<endl;
		cout<<"\n1.Paying Car \n2.NoPaying Car \n3.Display Info \n4.Exit"<<endl;
		cout<<"Enter your choice from 1 to 4:"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				T.paying_car();
				break;
			case 2:
				T.no_paying_car();
				break;
			case 3:
				T.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"ERROR!!!Try Again"<<endl;
		}
	}
	getch();
	return 0;
}
