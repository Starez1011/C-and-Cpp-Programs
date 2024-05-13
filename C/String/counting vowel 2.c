#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[100];
	int i,j,count=0;
	printf("Enter a string: ");
	gets(a);
	//counting vowels
	for(i=0; a[i]!='\0'; i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' 
		|| a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
			count++;
		}
	}
	printf("There are %d vowels",count);
}
