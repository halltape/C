#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int age;
    char name[30];
    char sex[10];
    struct person *next;
};

void input(struct person **head);
void add_person(struct person **head, int age, char *name, char *sex);
void *CheckNULL(void *ptr);
void output(struct person *head);
void free_func(struct person *head);

int main() {
    struct person *head = NULL;
    head = CheckNULL((struct person*) malloc(sizeof(struct person)));
    input(&head);
    output(head);
    free_func(head);
    return 0;
}

void input(struct person **head) {
    int age;
    char name[30], sex[10];
    char symbol;
    printf("\nThis is a single linked list! Type or COPY-PASTE your data here!\n");
    printf("Dont push the ENTER button until you insert your data\n");
    printf("AGE\tNAME\tSEX\n");
    while (symbol != '\n') {
        scanf("%d%s%s", &age, name, sex);
        add_person(head, age, name, sex);
        symbol = getchar();
    }
}

void add_person(struct person **head, int age, char *name, char *sex) {
    struct person *ptr, *node;
    ptr = *head;
    node = CheckNULL((struct person*) malloc(sizeof(struct person)));
    node->age = age;
    strcpy(node->name, name);
    strcpy(node->sex, sex);
    node->next = NULL;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = node;
}

void output(struct person *head) {
    head = head -> next;
    int i = 0;
    while (head != NULL) {
        printf("\nAge = %d\nName = %s\nSex = %s\n", head->age, head->name, head->sex);
        head = head -> next;
        i++;
    }
    printf("\nThe number of elements = %d\n\n", i);
}

void *CheckNULL(void *ptr) {
    if (NULL == ptr) {
        printf("warning!\n");
        exit(1);
    }
    return ptr;
}

void free_func(struct person *head) {
    while (head != NULL) {
        free(head);
        head = head -> next;
    }
}

// This function for adding the new one at the end of linked list
/*void add_person(struct person **head, int age, char *name, char *sex) {
    struct person *node = CheckNULL((struct person*) malloc(sizeof(struct person)));
    node->age = age;
    strcpy(node->name, name);
    strcpy(node->sex, sex);
    node->next = *head;
    *head = node;
}*/
