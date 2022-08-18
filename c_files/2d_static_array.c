#include <stdio.h>
#include <stdlib.h>
#define M 2

void input(int array[][M], int *n);
int check_input(int *number);
void sort(int array[][M], int n);
void output(int array[][M], int n);

int main() {
    int N;
    printf("\nThis is static array. It has 2 columns (change it in #define)\nHow many rows do you need?\n");
    check_input(&N);
    int array[N][M];
    input(array, &N);
    sort(array, N);
    output(array, N);
    return 0;
}

void input(int array[][M], int *n) {
    printf("Type your numbers:\n");
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array[i][j]);
        }
    }
}

int check_input(int *n) {  // При вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;   // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", n) != 1 || ((symbol = getchar()) != '\n')) {  // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");  // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}

void sort(int array[][M], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = j + 1; k < M; k++) {
            if (array[i][j] > array[i][k]) {
                int temp = array[i][j];
                array[i][j] = array[i][k];
                array[i][k] = temp;
                }
            }
        }
    }
}

void output(int array[][M], int n) {
    printf("\nYour array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
