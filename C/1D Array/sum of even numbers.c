#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n,esum=0;
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
	//calculation
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			esum=esum+a[i];
		}
	}
	printf("\nThe sum of even numbers is %d.",esum);
}
