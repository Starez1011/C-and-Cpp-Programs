#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[100];
	int i=0,j,n=0;
	printf("Enter a string: ");
	gets(a);
	//finding length of string
	while(a[i]!='\0'){
		i++;
	}
	//copying in reverse order
	for(j=i-1; j>=0; j--){
		b[j]=a[n];
		n++;
	}
	printf("The copied string is %s",b);
}
