#include <stdio.h>
#include <conio.h>

void main(){
	char a[100];
	int i,c=0,d=0,e=0;
	printf("Enter a string: ");
	gets(a);
	for(i=0; a[i]!='\0'; i++){
			if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z'){
				c++;
			}
			else if(a[i]>='0' && a[i]<='9'){
				d++;
			}
			else{
				e++;
			}
	}
	printf("There are %d alphabets, %d digits and %d symbols ",c,d,e);
}
