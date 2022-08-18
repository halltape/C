#include <stdio.h>
#include <stdlib.h>

void input(int *array, int *length);
int check_input(int **number);
int sort(int *array, int length);
void output(int *array, int length, int *result);

int main() {
    int N;
    int *arr;
    printf("This is static 1d array! Whats the length?\n");
    input(arr, &N);
    int sum = sort(arr, N);
    output(arr, N, &sum);
    return 0;
}

void input(int *array, int *length) {
    check_input(&length);
    printf("Type your numbers\n");
    for (int i = 0; i < *length; i++) {
        scanf("%d", &array[i]);
    }
}

int check_input(int **n) {  // При вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;    // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", (*n)) != 1 || ((symbol = getchar()) != '\n')) {  // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");  // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}

int sort(int *array, int length) {
    int counter = 0;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                counter++;
            }
        }
    }
    return counter;
}

void output(int *array, int length, int *result) {
    printf("Your array\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("sum of replace = %d\n", *result);
}
