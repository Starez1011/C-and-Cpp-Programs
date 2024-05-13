#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter the value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	//display array
	for(i=0; i<n; i++){
		printf("The value of a[%d] is %d\n",i,a[i]);
	}
}
