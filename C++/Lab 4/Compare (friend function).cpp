#include <iostream>
#include <conio.h>
using namespace std;
class Compare{
	int a,b;
	public:
		void getInfo(){
			cout<<"Enter two numbers: "<<endl;
			cin>>a>>b;
		}
		friend void access(Compare);
};
void access(Compare c1){
	if(c1.a>c1.b){
		cout<<"Max number is: "<<c1.a<<endl;
	}
	else{
		cout<<"Max number is: "<<c1.b<<endl;
	}
}
int main(){
	Compare c1;
	c1.getInfo();
	access(c1);
	getch();
	return 0;
}
