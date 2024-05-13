#include <stdio.h>
#include <conio.h>
float power(float,float);
int factorial(int);
int main(){
	int i,sign=1;
	float x,n,sum=0;
	printf("Enter value of x and n: ");
	scanf("%f%f",&x,&n);
	for(i=1; i<=2*n; i=i+2){
		sum=sum+(sign*(power(x,i)/factorial(i)));
		sign=sign*-1;
	}
	printf("The sum is %f",sum);
}
float power(float a,float b){
	int p=1,i;
	for(i=1; i<=b; i++){
		p=p*a;
	}
	return p;
}
int factorial(int x){
	int fact=1,i;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
