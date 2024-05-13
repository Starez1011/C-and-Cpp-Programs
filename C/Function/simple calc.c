#include <stdio.h>
#include <conio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(float,float);

int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
		add(a,b);
		
		sub(a,b);
		
		mul(a,b);
		
		div(a,b);
	getch();
	return 0;
}
void add(int a,int b){
	int c;
	c=a+b;
	printf("\nThe Sum is %d",c);
}
void sub(int a,int b){
	int c;
	c=a-b;
	printf("\nThe Difference is %d",c);
}
void mul(int a,int b){
	int c;
	c=a*b;
	printf("\nThe product is %d",c);
}
void div(float a,float b){
	float c;
	c=a/b;
	printf("\nThe division is %f",c);
}
