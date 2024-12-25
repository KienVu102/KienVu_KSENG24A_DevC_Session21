#include <stdio.h>
#include <stdlib.h>

int main(){
	int lines;
	char string[1000];
	FILE *fptr;
	printf("Moi ban nhap so dong: ");
	scanf("%d", &lines);
	getchar();
	fptr = fopen("bt05.txt", "w");
	
	for(int i=0; i<lines; i++){
		printf("Moi ban nhap noi dung dong %d: ", i+1);
		fgets(string, sizeof (string), stdin);
		fprintf(fptr, "%s", string);
	}
	fclose(fptr);
	
	printf("\nNoi dung ban vua nhap da co trong file bt05.txt\n");
	fclose(fptr);

	return 0;
}

