#include <stdio.h>

int main(){
	char string[2006];
	FILE *bt1;
	FILE *bt6;
	
	bt1 = fopen("bt06.txt","w");
	bt6 = fopen("bt01.txt","r");
	while(fgets(string, sizeof string, bt6)!=NULL){
		fprintf(bt1, "%s", string);
	}
	fclose(bt1);
	fclose(bt6);
	printf("Da sao chep bt1 -> bt6 !");
	return 0;
}

