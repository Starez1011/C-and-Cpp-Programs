#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[10]={'a','e','i','o','u','A','E','I','O','U'};
	int i,j,count=0;
	printf("Enter a string: ");
	gets(a);
	//counting vowels
	for(i=0; a[i]!='\0'; i++){
		for(j=0; j<=9; j++){
			if(a[i]==b[j]){
				count++;
			}
		}
	}
	printf("There are %d vowels",count);
}
