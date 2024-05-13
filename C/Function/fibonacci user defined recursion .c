#include <stdio.h>
#include <conio.h>

int fibonacci(int,int,int);
int main(){
	int i,n,a,b,result;
	printf("Enter no. of series");
	scanf("%d",&n);
	printf("Enter first and second element: ");
	scanf("%d%d",&a,&b);
	printf("Fibonacci series\n");
	for(i=0; i<n; i++){
		result=fibonacci(i,a,b);
		printf("%d\t",result);
	}
	return 0;
}
int fibonacci(int n,int a,int b){
	int result;
	if(n==0){
		return a;
	}
	else if(n==1){
		return b;
	}
	else{
		result=(fibonacci(n-1,a,b)+fibonacci(n-2,a,b));
		return result;
	}
}
