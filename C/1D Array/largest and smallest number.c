#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n,max,min;
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
	//maximum and minimum number
	max=a[0];
	min=a[0];
	for(i=1; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nThe largest number is %d and smallest is %d.",max,min);
}
