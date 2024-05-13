#include <stdio.h>
#include <conio.h>

int sum(int);
int main(){
	int n,result;
	printf("Enter a number: ");
	scanf("%d",&n);
	result=sum(n);
	printf("Sum of %d natural number is %d",n,result);
	getch();
	return 0;
}
int sum(int n){
	int result;
	if(n==1){
		return 1;
	}
	else{
		result=n+sum(n-1);
		return result;
	}
}
