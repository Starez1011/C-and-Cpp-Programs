#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,j,n,num,number,place=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	
	//input array
	for(i=0; i<n; i++){
		printf("Enter a[%d] elements: ",i);
		scanf("%d",&a[i]);
	}
	
	//display array
	printf("\nThe Elements are:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	
	// arrange in ascending order
	printf("\n");
	num=a[0];
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
			num=a[i];
			a[i]=a[j];
			a[j]=num;
			}
		}
	}
	
	//display in ascending order
	printf("Ascending order is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	
	//input a number
	printf("\nEnter a number: ");
	scanf("%d",&number);
	
	//finding position for the number in array
	for(i=0; i<n; i++){
		if(number>a[i]){
			place++;
		}
	}
	for(i=n; i>place; i--){
		a[i]=a[i-1];
	}
	a[place]=number;
	printf("\nThe new array is :\n");
	for(i=0; i<n+1; i++){
		printf("%d\t",a[i]);
	}
}
