#include <stdio.h>
#include <conio.h>

void input(int*,int);
void output(int*,int);

int main(){
	int a[100],n;
	printf("Enter array size:");
	scanf("%d",&n);
	input(a,n);
	output(&a,n);
	return 0;
}
void input(int *a,int n){
	int i;
	for(i=0; i<n; i++){
		printf("Enter a[%d] number",i);
		scanf("%d",(a+i));
	}
}
void output(int *b,int n){
	int i;
	printf("The array numbers are:\n");
	for(i=0; i<n; i++){
		printf("%d\t",*(b+i));
	}
}
