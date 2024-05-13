#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,num,n,count=0;
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
	//finding frequency
	printf("\nEnter a number for finding frequency: ");
	scanf("%d",&num);
	for(i=0; i<n; i++){
		if(a[i]==num){
			count++;
		}
	}
	if(count==0){
		printf("The number is not in the array.");
	}
	else{
		printf("\nFrequency of %d is %d",num,count);
	}
}
