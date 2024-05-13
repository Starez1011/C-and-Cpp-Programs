#include <iostream>
#include <conio.h>
using namespace std;
class AData{
	int a;
	public:
		AData(int x){
			a=x;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}
		friend class BData;
};
class BData{
	int b;
	public:
		BData(int y){
			b=y;
		}
		void display(){
			cout<<"b = "<<b<<endl;
		}
		void swap(AData A);
};
void BData::swap(AData A){
			int temp;
			temp = A.a;
			A.a=b;
			b=temp;
			cout<<"a = "<<A.a<<endl<<"b = "<<b<<endl; 
		}
int main(){
	AData A(8);
	BData B(5);
	A.display();
	B.display();
	cout<<"After swap: "<<endl;
	B.swap(A);
	getch();
	return 0;
}
