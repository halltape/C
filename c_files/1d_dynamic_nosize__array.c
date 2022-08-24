#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void *CheckNULL(void *ptr);
int input(int **array);
void sort(int *array, int n);
void output(int *array, int n);

int main() {
    int *arr;
    int N = input(&arr);
    sort(arr, N);
    output(arr, N);
    //free(arr);
    return 0;
}

void *CheckNULL(void *ptr) {
    if (NULL == ptr) {
        printf("warning!\n");
        exit(1);
    }
    return ptr;
}

int input(int **array) {
    int length = 0, capacity = 1;
    *array = CheckNULL((int*)malloc(capacity * sizeof(int)));
    printf("This is no size dynamic array! Just type as musch as you can. And add '-1' at the end\n");
    while (1) {
        scanf("%d", &(*array)[length++]);
        if ((*array)[length - 1] == -1) {
            break;
        }
        if (length == capacity) {
            capacity *= 2;
            *array = CheckNULL(realloc(*array, capacity * sizeof(int)));
        }
    }
    *array = CheckNULL(realloc(*array, length * sizeof(int)));
    return length;
}

void sort(int *array, int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void output(int *array, int n) {
    printf("Your array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
