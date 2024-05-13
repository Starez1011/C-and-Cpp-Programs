#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],b[100],n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input first array
	for(i=0; i<n; i++){
		printf("Enter a[%d] elements: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	//input second array
	for(i=0; i<n; i++){
		printf("Enter b[%d] elements: ",i);
		scanf("%d",&b[i]);
	}
	//display first array
	printf("\nElements in first array:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	//display second array
	printf("\nElements in second array:\n");
	for(i=0; i<n; i++){
		printf("%d\t",b[i]);
	}
	//display addition
	printf("\nThe sum of first and second arrays is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]+b[i]);
	}
	//display subtraction
	printf("\nThe difference of first and second arrays is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]-b[i]);
	}
	//display multiplication
	printf("\nThe product of first and second arrays is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]*b[i]);
	}
}
