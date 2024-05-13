#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void palindrome(int);
void oddeven();
int factorial();
int natural(int);

int main(){
	int choice;
	int n,result;
	while(1){
		printf("\n******MENU DRIVEN PROGRAM******");
		printf("\n1.PALINDROME\n2.ODD OR EVEN\n3.FACTORIAL\n4.SUM OF N NATURAL NUMBERS\n5.EXIT\n");
		printf("Enter your choice 1 to 5: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a number: ");
				scanf("%d",&n);
				palindrome(n);
				break;
			case 2:
				oddeven();
				break;
			case 3:
				result=factorial();
				printf("\nFactorial of %d is %d\n",n,result);
				break;
			case 4:
				printf("Enter a number: ");
				scanf("%d",&n);
				result=natural(n);
				printf("\nSum of %d natural numbers is %d.\n",n,result);
				break;
			case 5: exit(0);
			
			default:
				printf("\nERROR!!!TRY AGAIN\n");
		}
	}
	getch();
	return 0;
}
void palindrome(int n){
	int sum=0,a,rem;
	a=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==a){
		printf("\nIt is palindrome\n");
	}
	else{
		printf("\nIt is not Palindrome\n");
	}
}
void oddeven(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("\nIt is a Even Number\n");
	}
	else{
		printf("\nIt is an Odd Number\n");
	}
}
int factorial(){
	int fact=1,i,n;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=n; i>=1; i--){
		fact=fact*i;
	}
	return fact;
}
int natural(int n){
	int sum=0,i;
	for(i=1; i<=n; i++){
		sum=sum+i;
	}
	return sum;
}
