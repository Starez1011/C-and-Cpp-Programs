#include <stdio.h>
#include <conio.h>

int fibonacci(int);
int main(){
	int i,n;
	printf("Enter no. of series");
	scanf("%d",&n);
	printf("Fibonacci series is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",fibonacci(i));
	}
	return 0;
}
int fibonacci (int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
