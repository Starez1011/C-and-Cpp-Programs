#include <stdio.h>
#include <conio.h>

void compare(int,int,int*,int*);
int main(){
	int great,small,x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	compare(x,y,&great,&small);
	printf("\nThe great number is %d and smaller is %d",great,small);
	return 0;
}
void compare(int a,int b,int *great,int *small){
	if(a>b){
		*great=a;
		*small=b;
	}
	else{
		*great=b;
		*small=a;
	}
}
