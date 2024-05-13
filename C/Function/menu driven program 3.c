#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int countnumber(int);
int reverse();
void prime(int);
void armstrong();

int main(){
	char ch;
	int choice;
	int n,result;
	do{
		system("cls");
		printf("\n******MENU DRIVEN PROGRAM******");
		printf("\n1.Count number of digits in number\n2.Reverse of number\n3.Prime or Not\n4.Armstrong or Not\n");
		printf("Enter your choice 1 to 4: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a number: ");
				scanf("%d",&n);
				result=countnumber(n);
				printf("\nThere are %d digits\n",result);
				break;
			case 2:
				result=reverse();
				printf("\nReverse of %d is %d\n",n,result);
				break;
			case 3:
				printf("Enter a number: ");
				scanf("%d",&n);
				prime(n);
				break;
			case 4:
				armstrong();
				break;
			default:
				printf("\nERROR!!!TRY AGAIN\n");
		}
	fflush(stdin);
	printf("Do you want to continue?");
	scanf("%c",&ch);
	}
	while(ch=='y'|| ch=='Y');
	getch();
	return 0;
}
int countnumber(int n){
	int count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	return count;
}
int reverse(){
	int n,sum=0,rev;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0){
		rev=n%10;
		sum=sum*10+rev;
		n=n/10;
	}
	return sum;
}
void prime(int n){
	int i,count=0;
	for(i=1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("\n%d is prime number\n",n);
	}
	else{
		printf("\n%d is not prime number\n",n);
	}
}
void armstrong(){
	int a,sum=0,i,n,rem;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n;
	while(n>0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==a){
		printf("\n%d is armstrong number\n",a);
	}
	else{
		printf("\n%d is not armstrong number\n",a);
	}
}
