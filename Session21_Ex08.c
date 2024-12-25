#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[100];
    int age;
} Student;

int main(){
    Student students[100]; 
    int count = 0; 
    FILE *file;
	file = fopen("students.txt", "r");
	while (fscanf(file, "ID: %d, Ten: %[^,], Tuoi: %d\n", &students[count].id, students[count].name, &students[count].age) != EOF){
        count++;
        if (count >= 100) {
            printf("Da den gioi han\n");
            break;
        }
    }

    fclose(file);
    printf("Cac sinh vien co trong file la:\n");
    for (int i = 0; i < count; i++) {
        printf("Sinh vien %d: ID: %d, Ten: %s, Tuoi: %d\n", i + 1, students[i].id, students[i].name, students[i].age);
    }

    return 0;
}

