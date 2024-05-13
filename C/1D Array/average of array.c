#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],n,i;
	float sum=0,avg;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter elements for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	//display array
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	//sum of elements
	for(i=0; i<n; i++){
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nThe average of given elements is %.2f",avg);
	getch();
}
