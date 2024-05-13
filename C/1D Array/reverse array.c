#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n,j=0;
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
//display in reverse
	printf("\nThe reverse array is:\n");
	for(i=n-1; i>=0; i--){
		printf("%d\t",a[i]);
	}

}
