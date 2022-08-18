#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input(int *n);
int check_input(int **number);
int res(int *n);
void output(int *n);

int main() {
    int num;
    printf("Address of num (main function) = %p\n\n", &num);
    input(&num);
    int result = res(&num);
    output(&result);
    return 0;
}

void input(int *n) {
    printf("And you will see why the 'same' variables have different adresses\n");
    printf("Type your number\n");
    check_input(&n);
    printf("num  = %d\n", *n);
    printf("Address of num (input function1) = %p\n\n", n);
}

int check_input(int **n) {     // При вводе "5 ENTER" в *n = 5, symbol = '\n'
    char symbol = 0;            // При вводе "g5" в *n = 0, symbol = '\0'
    if (scanf("%d", (*n)) != 1 || ((symbol = getchar()) != '\n')) {   // При вводе "5g" в *n = 5, symbol = g
        printf("ERROR!\n");          // При вводе "/5" в *n = 0, symbol = 0
        exit(1);
    }
    return 0;
}

int res(int *n) {
    printf("num  = %d\n", *n);
    printf("Address of num (result function) = %p\n\n", n);
    return (*n) * 2;
}

void output(int *n) {
    printf("result of num * 2 = %d\n", *n);
    printf("Address of result = %p\n\n", &n);
}
