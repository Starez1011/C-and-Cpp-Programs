#include <stdio.h>
#include <conio.h>
int factorial (int);
int main(){
	int n,result;
	printf("Enter a number: ");
	scanf("%d",&n);
	result=factorial(n);
	printf("The factorial of %d is %d",n,result);
	getch();
	return 0;
}
int factorial (int n){
	int result;
	if(n==0){
		return 1;
	}
	else{
		result=n*factorial(n-1);
		return result;
	}
}
