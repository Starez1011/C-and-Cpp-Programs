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
	//maximum number
	max=a[0];
	min=a[0];
	for(i=1; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
		else if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nThe maximum number is %d.",max);
	printf("\nThe minimum number is %d.",min);
}
