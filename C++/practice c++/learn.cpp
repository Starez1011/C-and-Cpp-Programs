#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main(){
	ofstream project_starez;
	project_starez.open("new.txt");
	project_starez<< "Welcome to the chapter of file handling in c++" ;
	project_starez<< "This is the first sentence of this file ";
	project_starez.close();
	return 0;
}
