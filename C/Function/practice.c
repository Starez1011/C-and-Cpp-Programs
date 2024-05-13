#include <stdio.h>
#include <conio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(float,float);

int main(){
	int a,b,choice;
	while(1){
		printf("\n******Simple calculator**********\n");
	printf("\n1. Addition\n2.Subtraction\n3.Product\n4.Division\n5.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	switch(choice){
		case 1:add(a,b);
			break;
		case 2:sub(a,b);
			break;
		case 3:mul(a,b);
			break;
		case 4:div(a,b);
			break;
		case 5:exit(0);
			break;
		default: printf("\nERROR!!!TRY AGAIN");
	}
	}
	getch();
	return 0;
}
void add(int a,int b){
	int c;
	c=a+b;
	printf("\nSum is %d",c);
}
void sub(int a,int b){
	int c;
	c=a-b;
	printf("\nSub is %d",c);
}
void mul(int a,int b){
	int c;
	c=a*b;
	printf("\nMul is %d",c);
}
void div(float a,float b){
	float c;
	c=a/b;
	printf("\nDiv is %f",c);
}
