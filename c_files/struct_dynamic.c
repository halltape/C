#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct person {
    int age;
    char name[30];
    char sex[10];
};

void *CheckNULL(void *ptr);
int input(struct person **student);
void compare(int n, struct person *student);
void output(int n, struct person *student);

int main() {
    struct person *student;
    int len = input(&student);
    compare(len, student);
    output(len, student);
    free(student);
}

void *CheckNULL(void *ptr) {
    if (NULL == ptr) {
        printf("warning!\n");
        exit(1);
    }
    return ptr;
}

int input(struct person **student) {
    printf("\nThis is a dynamic structure! Type or COPY-PASTE your data here!\n");
    printf("Press 'ESC' and 'ENTER' after that\n");
    printf("AGE\tNAME\tSEX\n");
    *student = CheckNULL(malloc(sizeof(struct person)));
    int i = 0, length = 0;
    char symbol = 0;
        while (symbol != 27) {
            if (scanf("%d%s%s", &((*student)[i].age), (*student)[i].name, (*student)[i].sex) != 0) {
                length++;
                i++;
            }
            *student = CheckNULL(realloc(*student, (length + 1) * sizeof(struct person)));
            symbol = getchar();
        }
        *student = CheckNULL(realloc(*student, (length) * sizeof(struct person)));
    return length;
}

void compare(int n, struct person *student) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(student[j].name, student[j + 1].name) > 0) {
                struct person temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}

void output(int n, struct person *student) {
    for (int i = 0; i < n; i++) {
        printf("\nAge = %d\nName = %s\nSex = %s\n", student[i].age, student[i].name, student[i].sex);
    }
}
