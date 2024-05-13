#include <stdio.h>
#include <conio.h>

void input(int [50][50],int,int);
void display(int [50][50],int,int);
int main(){
	int a[50][50],b,c;
	printf("Enter row and column:");
	scanf("%d%d",&b,&c);
	input(a,b,c);
	display(a,b,c);
	return 0;
}
void input(int a[50][50],int b,int c){
	int i,j;
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[50][50],int b,int c){
	int i,j;
	printf("Display m*n matrix:\n");
	for(i=0; i<b;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
