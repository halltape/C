#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void input(int ***array, int *n, int *m);
int check_input(int **number);
void create_snake(int **array, int n, int m);
void output(int **array, int n, int m);

int main() {
    int N, M;
    int **arr;
    input(&arr, &N, &M);
    create_snake(arr, N, M);
    output(arr, N, M);
    free(arr);
    return 0;
}

void input(int ***array, int *n, int *m) {
    printf("Type the size of snake:\n");
    printf("Type N:\n");
    check_input(&n);
    printf("Type M:\n");
    check_input(&m);
    *array = (int**)malloc((*n) * sizeof(int*) + (*n) * (*m) * sizeof(int));
    int *ptr = (int*)(*array + *n);
    for (int i = 0; i < *n; i++) {
        (*array)[i] = ptr + (*m) * i;
    }
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *m; j++) {
            (*array)[i][j] = 0;
        }
    }
}

int check_input(int **n) {      // При вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;         // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", (*n)) != 1 || ((symbol = getchar()) != '\n')) {  // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");      // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}
void create_snake(int **array, int n, int m) {
    int num = 1;
    int i = 0, j = 0;
    int step_M = m, step_N = n, step_k = 0;
    while (num <= n * m) {
        while (j < step_M && num <= n * m) {
        array[i][j] = num++;
        j++;
        }
    i++;
    j--;
        while (i < step_N && num <= n * m) {
        array[i][j] = num++;
        i++;
        }
    i--;
    j--;
        while (j >= step_k && num <= n * m) {
        array[i][j] = num++;
        j--;
        }
    i--;
    j++;
        while (i > step_k && num <= n * m) {
        array[i][j] = num++;
        i--;
        }
    i++;
    j++;
    step_M--;
    step_N--;
    step_k++;
    }
}

void output(int **array, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
}
