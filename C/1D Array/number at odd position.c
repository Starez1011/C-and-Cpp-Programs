#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter a[%d] elements: ",i);
		scanf("%d",&a[i]);
	}
	//display array
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	//number at odd postion
	printf("\nThe numbers at odd position are:\n");
	for(i=0; i<n; i++){
		if(i%2!=0){
			printf("%d\t",a[i]);
		}
	}
}
