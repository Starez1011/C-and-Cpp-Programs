#include <iostream>
#include <conio.h>
using namespace std;
class Rational{
	static int count;
	public:
		Rational(){
			count++;
			cout<<"Object"<<count<<"created"<<endl;
		}
		~Rational(){
			cout<<"Object"<<count<<"destroyed"<<endl;
			count--;
		}
};
int Rational::count;
int main(){
	{
		Rational R1,R2,R3;
	}
	getch();
}
