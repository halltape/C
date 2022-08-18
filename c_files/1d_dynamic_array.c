#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int input(int **array, int *n);
int check_input(int **number);
void sort(int *array, int n);
void output(int *array, int n);

int main() {
    int N = 0;
    int *arr;
    input(&arr, &N);
    sort(arr, N);
    output(arr, N);
    free(arr);
    return 0;
}
int input(int **array, int *n) {
    printf("\nThis is a dynamic 1d array! It can bubblesort your array. What's the length? \n");
    check_input(&n);
    *array = (int*)malloc((*n) * sizeof(int));
    printf("Print your array\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &(*array)[i]);
    }
    return 0;
}

int check_input(int **n) {    // При вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;         // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", (*n)) != 1 || ((symbol = getchar()) != '\n')) {   // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");   // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}
void sort(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
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
