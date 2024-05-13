#include <stdio.h>
#include <conio.h>

void main(){
	int a1[100],a2[100],n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter a1[%d] elements: ",i);
		scanf("%d",&a1[i]);
	}
	//display first array
	for(i=0; i<n; i++){
		printf("%d\t",a1[i]);
	}
	//copying array
	for(i=0; i<n; i++){
		a2[i]=a1[i];
	}
	//display second array
	printf("\nThe elements of second array is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a2[i]);
	}
}
