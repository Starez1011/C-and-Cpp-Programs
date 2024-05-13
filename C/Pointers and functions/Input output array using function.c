#include <stdio.h>
#include <conio.h>

void input(int [],int);
void display(int [],int);

int main(){
	int a[100],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	intput(a,n);
	display(a,n);
return 0;
}
void intput(int a[],int n){
	int i;
	for(i=0; i<n; i++){
		printf("Enter a[%d] number:",i);
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
}
 
