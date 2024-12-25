#include <stdio.h>

int main(){
	FILE  *fptr;
	fptr = fopen("bt01.txt", "r");
	
	char firstLetter;
	firstLetter=fgetc(fptr);
    
	printf("Chu cai dau tien trong file la: %c", firstLetter);
    fclose(fptr);
	
	return 0;
}

