#include <stdio.h>
#include <string.h>

int main(){
	FILE  *fptr;
	fptr = fopen("bt01.txt", "r");
    
	char line[100]; 
    fgets(line, sizeof line, fptr);
    printf("Dong dau tien trong file la: %s", line);
    
    fclose(fptr);
	
	return 0;
}

