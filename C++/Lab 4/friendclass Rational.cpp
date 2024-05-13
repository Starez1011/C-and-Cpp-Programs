#include <iostream>
#include <conio.h>
using namespace std;
class ARational{
	int a,b;
	public:
		void get(){
			cout<<"Enter number: "<<endl;
			cin>>a>>b;
		}
		void display(){
			cout<<"The number is: "<<a<<"/"<<b<<endl;
		}
		friend class BRational;
};
class BRational{
	int a,b;
	public:
		void get(){
			cout<<"Enter number: "<<endl;
			cin>>a>>b;
		}
		void display(){
			cout<<"The number is: "<<a<<"/"<<b<<endl;
		}
		void add(ARational A){
			BRational B;
			B.a=a*A.b+b*A.a;
			B.b=b*A.b;
			B.display();
		}
};
int main(){
	ARational A;
	BRational B;
	A.get();
	B.get();
	A.display();
	B.display();
	cout<<"After Addition: "<<endl;
	B.add(A);
	getch();
	return 0;
}
