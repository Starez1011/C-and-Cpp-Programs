#include <stdio.h>
#include <conio.h>

int factorial(int);

int main(){
	int i,n,sum=0;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		sum=sum+factorial(i);	
	}
	printf("The required sum is %d",sum);
}
int factorial (int n){
	int i,sum=0,fact=1;
	for(i=1; i<=n; i++){
		fact=fact*i;
	}
	return fact;
}
