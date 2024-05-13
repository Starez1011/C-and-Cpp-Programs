#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,j,n,num;
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
	//calculation
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){
				num=a[i];
				a[i]=a[j];
				a[j]=num;
			}
		}
	}
	printf("\nArray in descending order:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	printf("Third largest is %d",a[2]);
}
