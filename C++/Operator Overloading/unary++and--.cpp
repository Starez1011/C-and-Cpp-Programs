#include <iostream>
#include <conio.h>
using namespace std;
class Number{
	int x,y;
	public:
		Number(){
			x=0;
			y=0;
		}
		Number(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
		void operator ++(){
			x=++x;
		}
		void operator --(){
			y=--y;
		}
};
int main(){
	Number n(4,8);
	n.display();
	cout<<"After overloading: "<<endl;
	++n;
	--n;
	n.display();
	getch();
	return 0;
}
