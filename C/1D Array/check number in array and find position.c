#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n,num,flag=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter a[%d] element: ",i);
		scanf("%d",&a[i]);
	}
	//display array
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter number: ");
	scanf("%d",&num);
	for(i=0; i<n; i++){
		if(a[i]==num){
			flag++;
			printf("Number %d is found at: ",num);
			break;
		}
	}
	for(i=0; i<n; i++){
		if(a[i]==num){
			printf("%d\t",i);
		}
	}
	if(flag==0){
		printf("Number %d is not found",num);
	}
}
