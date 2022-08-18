#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int input(int ***array, int *n, int *m);
int check_input(int **number);
void sort(int **array, int n, int m);
void output(int **array, int n, int m);

int main() {
    int N, M;
    int **arr;
    input(&arr, &N, &M);
    sort(arr, N, M);
    output(arr, N, M);
    free(arr);
    return 0;
}

int input(int ***array, int *n, int *m) {
    printf("This is a dynamic 2d array!\n");
    printf("Type N:\n");
    check_input(&n);
    printf("Type M:\n");
    check_input(&m);
    printf("Type your array!\n");
    *array = malloc((*n) * sizeof(int*) + (*n) * (*m) * sizeof(int));
    int *ptr = (int*)(*array + *n);
    for (int i = 0; i < *n; i++) {
        (*array)[i] = ptr + (*m) * i;
    }
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *m; j++) {
            scanf("%d", &(*array)[i][j]);
        }
    }
    return 0;
}

int check_input(int **n) {  // ри вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;  // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", (*n)) != 1 || ((symbol = getchar()) != '\n')) {  // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");  // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}

void sort(int **array, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
            if (array[i][j] > array[i][k]) {
                int temp = array[i][j];
                array[i][j] = array[i][k];
                array[i][k] = temp;
                }
            }
        }
    }
}

void output(int **array, int n, int m) {
    printf("Your array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
