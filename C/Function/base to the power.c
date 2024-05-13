#include <stdio.h>
#include <conio.h>
int pow1(int,int);
int main(){
	int a,base,power;
	printf("Enter base and power: ");
	scanf("%d%d",&base,&power);
	a=pow1(base,power);
	printf("Value of %d to power %d is :%d",base,power,a);
	return 0;
}
int pow1(int base,int power){
	int a;
	if(power==0){
		return 1;
	}
	else{
		a=base*pow1(base,power-1);
		return a;
	}
}
