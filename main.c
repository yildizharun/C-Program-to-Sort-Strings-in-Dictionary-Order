#include <stdio.h>
#include <stdlib.h>
void sortStrings(char strings[][50]);
void main(){
	char strings[5][50];
	
	
	int i,j;
	
	for(i=0;i<5;i++){
		printf("Enter the %d nd string: ",i);
		gets(strings[i]);
	}
	sortStrings(strings);
	for(i=0;i<5;i++){
		printf("%s\n",strings[i]);
	}
	
}
void sortStrings(char strings[][50]){
	int i,j;
	char temp[50];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(strcmp(strings[i],strings[j])<0){
				strcpy(temp,strings[i]);
				strcpy(strings[i],strings[j]);
				strcpy(strings[j],temp);
			}
		}
	}
}
