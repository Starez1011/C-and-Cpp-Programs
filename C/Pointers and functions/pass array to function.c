#include <stdio.h>
void modify(int []);
int main(){
	int a[5],i;
	printf("Enter numbers:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	modify(a);
	for(i=0; i<5; i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
void modify(int b[]){
	int i;
	for(i=0; i<5; i++){
		b[i]=b[i]*2;
	}
}
