#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    int numStudents;
    FILE *file;
	printf("Nhap so luong sinh vien: ");
    scanf("%d", &numStudents);
	Student students[numStudents];
	for (int i = 0; i < numStudents; i++) {
        printf("\nThong tin sinh vien %d: \n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
	file = fopen("students.txt", "w");
	for (int i = 0; i < numStudents; i++) {
        fprintf(file, "ID: %d, Ten: %s, Tuoi: %d\n", students[i].id, students[i].name, students[i].age);
    }
	fclose(file);
	printf("\nThong tin sinh vien da dc luu vao file students.txt \n");

    return 0;
}

