#include <stdio.h>

int main(){
	FILE  *fptr;
	fptr = fopen("bt01.txt", "w");
    char string[100]; 
    fgets(string, sizeof string, stdin);
    fprintf(fptr, "%s", string);
    
    fclose(fptr);
	
	return 0;
}

