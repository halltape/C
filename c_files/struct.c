#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct vehicle {
    int year;
    char label[50];
    char model[50];
};

void input (char **w, struct vehicle *car);
int compare (char *w, struct vehicle *car);
void output(int *r, struct vehicle *car);

int main() {
    struct vehicle car;
    char *word;
    input(&word, &car);
    int res = compare(word, &car);
    output(&res, &car);
    free(word);
    return 0;
}

void input (char **w, struct vehicle *car) {
    printf("Put here the year, the vehicle label and the model:\n");
    scanf("%d%s%s", &(car->year), car->label, car->model);
    printf("\nType what word do you want to find in you data?\n");
    *w = (char*)malloc(10 * sizeof(char));
    scanf("%s", &(**w));
}

int compare (char *w, struct vehicle *car) {
    int result = 0;
    if(atoi(w) == car->year) {
        result = 1;
    } else if(strcmp(w, car->label) == 0) {
        result = 1;
    } else if(strcmp(w, car->model) == 0) {
        result = 1;
    } else result = 0;
    return result;
}

void output(int *r, struct vehicle *car) {
    printf("\nYear = %d\nLabel = %s\nModel = %s\n\n", car->year, car->label, car->model);
    if(*r == 0) {
        printf("\nNO DATA!\n");
    } else printf("\nThis data exist!\n");
}